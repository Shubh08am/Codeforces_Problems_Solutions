#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d;
		int x,y,z;
	cin>>a>>b>>c>>d;

	if ( d>a && d>b && d>c)
	{
	x = abs(a-d);
	y = abs(b-d);
	z = abs(c-d);
	}
	
	else if ( c>a && c>b && c>d)
	{
	x = abs(a-c);
	y = abs(b-c);
	z = abs(d-c);
	}
	
		else if ( b>a && c<b && b>d)
	{
	x = abs(a-b);
	y = abs(b-c);
	z = abs(b-d);
	}
	
		else if ( a>d && a>b && a>c)
	{
	x = abs(a-b);
	y = abs(a-c);
	z = abs(d-a);
	}

	
cout << x <<" "<< y <<" "<< z << "\n";
			
return 0;	
}
