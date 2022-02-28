#include<iostream>

using namespace std; 

#define ll long long

#define rep(i, a, b) for (ll i = a; i < b; ++i)

const char nn = '\n';

signed main(){

ll t;

cin>>t;

while(t--){

ll n ,m;

cin>>n>>m;

ll a [n];

ll s=0;

rep(i,0,n) {cin >> a[i];

s+=a[i];

}

if( s==m) cout<<"YES"<<nn;

 

else

cout<<"NO"<<nn;

} 

return 0;

}
