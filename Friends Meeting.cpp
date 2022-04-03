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

ll n,l; cin>>n>>l;
ll cnt=0;
ll m =n+ceil(abs(n-l)/2.0) ;
ll oo = m-n;
ll p = oo*(oo+1)/2;

ll o = l-abs(n-l)/2;
ll y = l-o; 
ll yy = y*(y+1)/2 ;

cout<< p+yy  ;

return 0;
}
