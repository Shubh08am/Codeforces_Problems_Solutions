#include<iostream>
using namespace std; 

int main( )
{

/*int t;
cin>>t;
while(t--){*/

int a,b,m ;
cin>>a>>b;

if ( a > b)
cout << b << " ";

else if ( a==b)
cout << (a+b)/2<<" ";

else if ( b>a)
cout << a << " ";

m = ( abs(a-b) )/2 ;

if ( m > 0)
cout << m;

else if ( m <=0)
cout << 0;
return 0;
}
