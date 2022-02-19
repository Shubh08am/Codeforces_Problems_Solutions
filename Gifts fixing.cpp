#include<bits/stdc++.h>

#define ll long long
#define  ld long double
#define int long long
 
#define  vi vector<int>
 

 
#define vl vector<ll>
#define vd vector<ld>
#define vpi vector<pi>
#define vpl vector<pl>
#define rep(i, a, b) for (ll i = a; i < b; ++i)
#define fo(i, n) for (i = 0; i < n; i++)
#define setp(x) setprecision(x) << fixed
#define in insert
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
 
#define Sort(x) sort(all(x))
#define out(x) cout << x << "\n";
#define trav(i, v) for (auto &i : v)
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define take(v) trav(i, v) cin >> i;

const char nl = '\n';
 
ll inf = 1e18;
ll mod = 1000000000 + 7;
int MAXN = 1010101;
using namespace std;


ll gcd(ll a ,ll b)
{
     
    if(b==0) return a;
    return gcd (b,a%b );
}

ll lcm(ll a, ll b){
    return (a*b)/gcd(a,b);
}


signed main(){
ll t;
cin>>t;
while(t--)
{

	int n , da , db ; 
    cin>>n;
    ll * a = new ll [n] ; 
    ll*b = new ll [n];
 rep(i,0,n)  cin>>a[i] ; 
 
  rep(i,0,n)  cin>>b[i];

 
	int ma = *min_element(a, a + n);
	int mb = *min_element(b, b + n);
 
	ll ans = 0;
	rep(i,0,n)
	{
		da = a[i] - ma;
		db = b[i] - mb;
		ans += max(da, db);
	}
	cout<< ans<<nl;

}

return 0;
}
