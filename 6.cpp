#include<iostream>
#include<string.h>
using namespace std;

struct date{
int day;
int month;
int year;
};

struct Date{
int day;
int month;
int year;
};

int main()
{
    int dates=0;
    date d;
    cout<<"Enter the day: ";
    cin>>d.day;
    cout<<"Enter the month: ";
    cin>>d.month;
    cout<<"Enter the year: ";
    cin>>d.year;

    date D;
    cout<<"Enter the day: ";
    cin>>D.day;
    cout<<"Enter the month: ";
    cin>>D.month;
    cout<<"Enter the year: ";
    cin>>D.year;

    if(d.day==D.day)
    {
          if(d.month==D.month)
          {
             if(d.year==D.year)
             {
                 dates=1;
             }
          }
    }
    if (dates==1)
    {
        cout<<"Dates are equal";
    }
    else
    {
        cout<<"Dates are not equal";
    }
    return 0;
}




