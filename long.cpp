#include<iostream>
using namespace std
int main()
{
int n,i,j,fl=0;
char s[1000][1000],str[4000];
cin>>n;
for(i=0;i<n;i++)
cin>>s[i];
for(i=0;s[0][i];i++)
for(j=0;s[j][i];j++)
{
if(s[j][i]!=s[j-1][i])
{
cout<<str;
fl=1;
break;
}
}
if(f==1)
{
break;
else
str[i]=s[0][i];
}
return 0;
}
