#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {

ll i,a ;
cin >> a;
ll cnt = 0;
for (i=1 ; i<a; i++) 
{
if(a%i==0) 
cnt++;
}
cout<<cnt<<endl;
return 0;
}
