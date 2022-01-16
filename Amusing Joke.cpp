#include<iostream>

#include<bits/stdc++.h>

#include<string>

using namespace std; 

int main() {

	string a , b ,c ,m;	int d,e,f;

	

	cin>>a>>b>>c;

	

	d = a.size();

	e = b.size();

	f = c.size();

	

//m=strcat(a,b);

m = a+b;

sort ( m.begin() , m.end());

sort ( c.begin() , c.end());

if ( d + e == f)

 { 

     if ( c == m)

     cout << "YES\n";

     

     else if ( c!=m)

     cout << "NO\n";

 }

else if( d + e != f)

cout << "NO\n";

	return 0;

}
