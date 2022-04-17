#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, a, b) for (ll i = a; i < b; ++i)

signed main(){


ll n   ;
cin>>n   ;


ll ss=0;

        ll aa[n]; 
      rep(i,0,n)  cin>>aa[i];

rep(i,0,n) ss+=aa[i];

cout<< ss <<endl;

//}

return 0;}
