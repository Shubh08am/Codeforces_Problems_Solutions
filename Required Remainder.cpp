#include<iostream>
#include<string>
using namespace std; 

int main()
{
int t;
cin >> t;
while (t--) {
	
	int m,k,x,y,n;
	cin >> x >> y >> n;
/*	
	m = n - x;
	
	
	while ( m <=n)
	
	{
		
		if ( m %x == y && m > x)
	{
		cout << m << endl;
	}
	
	else if ( m < 0 )
	{ cout << 0<< endl; } 
	
	m= m+1;
	}
	*/
k = n - ((n - y) % x) ; 
cout << k<< endl;	
}
	
	return 0;
}
