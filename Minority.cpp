#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
    string n;

   cin>>n;


long long int s=n.length();
long long int cnt=0 , count=0;

/*
if ( s == 1|| s==2)
cout<<0<<endl;*/

//else if ( s >2)

for(long long int i=0;i<s;i++)
{
    if(n[i]=='1')
    {cnt++;}

    else
    count++;
}
//int m = s - cnt;
/*
if(m<cnt)
cout<<m<<endl;

else 
cout<< cnt<<endl;*/
if(cnt==count)
{cout<<cnt-1<<endl;}

else
{int result = min(cnt,count);
cout<<result<<endl;}

}
return 0;
}
