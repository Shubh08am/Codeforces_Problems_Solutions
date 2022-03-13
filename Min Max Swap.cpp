#include<bits/stdc++.h>
using namespace std; 

#define ll long long
#define ld long double
#define int long long

#define rep(i, a, b) for (ll i = a; i < b; ++i)
#define rev(i, a, b) for (ll i = a; i >=b; --i)
#define fo(i, n) for (ll i = 0; i < n; i++)
#define all(x) (x).begin(), (x).end()

#define Sort(x) sort(all(x))
#define out(x) cout << x << "\n";

const char nn = '\n';

ll inf = 1e18;
ll mod = 1000000000 + 7;
int MAXN = 1010101; 

signed main(){
ll t;
cin>>t;
while(t--){
ll n ;
cin>>n;
ll * v = new ll [n];
ll * b = new ll[n];


rep(i,0,n) cin>>v[i]; 
rep(i,0,n) cin>>b[i]; 


rep(i,0,n){
    if(b[i] <v[i]) { swap (b[i],v[i]);
}}
ll e = *max_element(v,v+n);
ll d = *max_element(b,b+n);
cout<<e*d<<nn;
} 

return 0;
}
