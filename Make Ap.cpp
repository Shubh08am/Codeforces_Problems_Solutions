#include<bits/stdc++.h>

#include<iostream>

#include<vector>

using namespace std;

int main()

{

	int t;	cin>> t ;

	while (t--)

	{

		long long a,b,c,m,x,y;		

		cin>>a>>b>>c;

		m = 2*b ;

         x = m - c ;

         y = m - a ;

         

if ( m == a+ c) 

{

cout << "YES" << "\n";

}

	

else if ( x >0 && x%a == 0)

		{

				cout <<"YES"<< "\n";

		}

			

else if ((a+c)%m == 0)

		{

				cout <<"YES"<< "\n";

		}

		

else if ( y >0 && y%c == 0)

		{

				cout <<"YES"<< "\n";

		}

	

			else

	cout<<"NO"<<endl;

}

		

	return 0;

	

}
