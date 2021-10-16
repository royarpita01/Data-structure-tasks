#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct student{
    string name;
    int id;
    float mark;
};

bool compareid(student s1,student s2)
{
    if(s1.id>s2.id)return true;
    else return false;
}

int main()
{

student info[10];
for(int i=0;i<10;i++)
{
    getline(cin,info[i].name);
    cin>>info[i].id;
    cin>>info[i].mark;
    getchar();
}

sort(info,info+10,compareid);
for(int i=0;i<10;i++)
{
    cout<<info[i].name<<" "<<info[i].id<<" "<<info[i].mark<<endl;
}
return 0;

}
