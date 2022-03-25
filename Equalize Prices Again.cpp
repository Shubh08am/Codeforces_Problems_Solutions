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

ll t; cin >> t ; while(t--){
ll n; cin>>n; ll s = 0;

ll a[n]; rep(i,0,n) {
	cin >> a[i]; s+=a[i];}
	

 sort(a,a+n);
  ll m = ceil(n/2.0) ;
  if(s%n==0) cout<<s/n<<nn;
  
  
  else  
cout << s/n+1<<nn;
}
return 0;
}
