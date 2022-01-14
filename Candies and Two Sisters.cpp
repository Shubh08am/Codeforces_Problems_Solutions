#include <iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int a,b;

    if (n==1 || n==2)
    { 
    cout<<0<<"\n";
    }

    else if (n%2==0 && n!=2)
    cout<<n/2 - 1<<"\n";

    else if (n%2!=0)
    {
cout<<n/2<<"\n";
    }
/*
    a=n-1;
    b=0;
    if (n==1 || n==2)
    { 
    cout<<0<<"\n";
    }


    else if (a+b==n)
    { 
    cnt++;
    cout<<cnt<<"\n";
}

else if ( a+b!=n)
{
    b+=1 ;
    if (a+b==n)
    { 
    m+=1;
    //cout<<cnt<<"\n";
    }

a=a-1 ; 
b+=1;
if (a+b==n)
    cnt++; 
    }
    cout<<cnt+m<<"\n"; 
}
*/
}
return 0;
}
