#include <iostream>

using namespace std;
struct student
{
       string name;
       int roll_no;
       int age;
};

void even(struct student a[])

{       int i;
        for( i=0;i<5;i++){if(a[i].roll_no%2==0)
        {
         cout<< a[i].name<<endl;
        }
}
void age14(struct student a[ ])
{
            int i;

         for( i=0;i<5;i++){if(a[i].age==14)
      {
       cout<< a[i].name<<endl;
      }
      }

}

void detail(int roll, struct student a[])
{
    for(int i=0;i<5;i++)
    {
        if(a[i].roll_no==roll)
        {
              cout<< a[i].name<<endl;
              cout<< a[i].roll_no<<endl;
              break;
        }
    }
}
int main(int argc, char *argv[])
{

    struct student a[5];

    for(int i=0;i<5;i++)
    {
            cout<<"Enter the name of the student"<<i+1<<endl;
            cin>>a[i].name;
            cout<<"Enter the roll number"<<endl;
            cin>>a[i].roll_no;
    }

            cout<<"The students having even roll numbers are"<<endl;

     even(a);

      detail(2,a);
return 0;
}








