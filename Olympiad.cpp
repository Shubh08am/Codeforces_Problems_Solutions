#include<bits/stdc++.h>
using namespace std; 

#define ll long long 

#define rep(i, a, b) for (ll i = a; i < b; ++i) 

const char nn = '\n'; 

signed main(){

ll n ;
cin>>n;
set<int>s;

rep(i,0,n){ ll x; cin >> x ; 
if(x>0)  s.insert(x);
}
cout<<s.size()<<nn;


return 0;
}
