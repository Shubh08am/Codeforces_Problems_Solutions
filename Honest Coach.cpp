#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long 

int main() {
ll t ;
cin >> t;
while (t--)
{
ll i,m,a ;

cin >> a;
ll * u = new ll [a];
vector<int>v;
for (i=0 ; i<a ; i++) 
{
cin >> u[i];
} 



sort(u,u+a);
if (a==2)    cout << abs(u[0] - u[1]) << endl;

else if ( a>2 ) {
for ( i = 1 ; i<a ; i++)
{
  m = abs(u[i-1] - u[i] );
  v.push_back(m);
}
sort(v.begin(),v.end());

cout << v[0] << endl; } 
}

//delete u ;
return 0;
}
