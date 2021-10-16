#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
        int n;
        n = atoi(argv[1]);
        SLinkedList<int> a[n];
        int sizenum;
        int num;
        for(int i=0;i<n;i++)
        {
                cout<<"Enter size :";
                cin>>sizenum;
           for(int j=0;j<sizenum;j++)
             {
                   cout<<"Enter number:";
                   cin>>num;
                   a[i].addFront(num);
             }
        }


        for(int i=0;i<n;i++)
        {
           for(int j=0;j<sizenum;j++)
             {
                   cout<<a[i].print()<<endl;
             }
        }


        system("PAUSE");
        return EXIT_SUCCESS;
}
