//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
typedef long long ll ;
using namespace std; 

int main()
{

	ll n ;
cin>>n;

if ( n%2==0)
cout << n/2 <<"\n" ;

	else if ( n%2!=0)
cout << -1*( n/2 + 1) << "\n";

return 0;

}
