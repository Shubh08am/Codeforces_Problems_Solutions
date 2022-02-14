#include <iostream>
using namespace std;

int main()
{
   long long int n,a,b,c,d,e,f,cnt=0,s=0;
 cin>>a>>b>>c>>d>>e>>f>>n;
 
   int cn= a+b+c;
     s = d+e+f;
 
 
while( cn > 0)
{
	cn-=5;
	cnt++;
	
}

while( s > 0)
{
	s-=10;
	cnt++;
	
}

if(cnt<=n)
cout<<"YES"<<endl;


else
cout << "NO\n";


    return 0;
}
