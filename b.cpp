cc#include<bits/stdc++.h>
using namespace std;

stack<char>stk;
int main()
{
int t;
cin>>t;
string s,s1="";
while(t--)
{
cin>>s;
for(int i=0;i<s.length();i++)
{
if(s[i]=='(' || s[i]==')' || s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^')
{
if(s[i]==')')
{
    s1=s1+stk.top();
stk.pop();
stk.pop();
}
else
stk.push(s[i]);
}
else
s1=s1+s[i];
}
cout<<s1<<endl;
s1.clear();
}
return 0;
}
