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

ll k,n,s,p;
	cin>>k>>n>>s>>p;
	
ll as=ceil((n)/(double)s);
	as*=k;
	as=ceil(as/(double)p);
	cout<<as;

return 0;
}
