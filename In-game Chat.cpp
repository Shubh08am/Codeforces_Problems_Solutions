#include<bits/stdc++.h>
#include<cmath>
using namespace std; 

#define ll long long


#define rep(i, a, b) for (ll i = a; i < b; ++i)
#define all(x) (x).begin(), (x).end() 

#define Sort(x) sort(all(x))
const char nn = '\n'; 

ll inf = 1e18;
ll mod = 1000000000 + 7;
int MAXN = 1010101; 

signed main(){
ll t; 

cin>>t;
while(t--){
ll n,k;
cin>>n; string a;
cin>>a;
ll cnt=0; ll c=0;

for(ll i = n-1  ; i>=0; --i){
 if(  a[i]==')' ) cnt++;
 
else{ break;
    }}
    
 if(cnt > n-cnt ) cout<<"Yes\n";

else cout<<"No\n";
}
return 0;
}
