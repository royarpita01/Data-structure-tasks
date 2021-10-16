#include<bits/stdc++.h>
using namespace std;

int main()
{
 int t;
 cin>>t;
 string s;
 while(t--)
 {
  long long c=0,r=0;
  cin>>s;
  for(int i=0;i<s.size();i++)
  {
   if(s[i]=='<')
   {
    c++;
   }
   else
   c--;
   if(c<0)
   {
    c=-1;
    goto end;

   }
   else if(c==0)
   {
    r=i+1;
   }

  }
  end:

  cout<<r<<"\n";
 }

}
