#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

int a,b,c ;

int count = 0;

for( int i = 0 ; i<t ; i++)
{
    cin>>a>>b>>c ;


   if ( a+b+c >=2 )
 
   { count = count + 1 ;
   }
  
}
 
cout << count;
    return 0 ;
}
