#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {

ll i,m,a ;

cin >> a;
ll * u = new ll [a];

for (i=0 ; i<a ; i++) 
{
cin >> u[i];
} 

sort(u,u+a);

if (a%2==0) 
cout << u[a/2 -1] << endl;

else 
cout << u[a/2] << endl;

return 0;
}
