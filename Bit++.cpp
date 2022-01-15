#include<iostream>
#include<cmath>
using namespace std; 

int main( )
{

int t;
cin>>t;

int x=0 ;

string s ;


for( int i=1 ; i<=t ;i++)
{
	cin>>s;
string a = "X++", b = "++X",  c = "--X", d= "X--";
   
        if (s == a || s== b)
        {
            x++;
        }
       if (s == c || s== d)
        {
            x--;
        }
        
    }
    
    cout << x << endl;
return 0;
}
