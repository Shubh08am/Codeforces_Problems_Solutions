#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  ld long double
#define int long long


#define vl vector<ll>

#define rep(i, a, b) for (ll i = a; i < b; ++i)
#define rev(i, a, b) for (ll i = a; i >=b; --i)
#define fo(i, n) for (ll i = 0; i < n; i++)
#define F first
#define S second
#define lb lower_bound
#define ub upper_bound
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

unsigned int gcd(unsigned int a ,unsigned int b)
{
    /* base condition*/ 
    if(b==0) return a;
    return gcd (b,a%b );
}

ll lcm(ll a, ll b){
    return (a*b)/gcd(a,b);
}

ll  fact(ll  n){
    if(n==0) return 1;

    return n *fact(n-1);
}

double ans(ll a , ll b , ll c, ll d){
    return sqrt(pow(c-a,2) + pow(d-b,2));
}
signed main(){
ll t;
cin>>t;
while(t--)
{
  /*  
ld a[6]  ;
rep(i,0,6) cin>>a[i];

ld x = a[1]; ld y=a[3]; ld z = a[5];
ll m=0;
// ll xx = a[0]; ll yy=a[2]; ll zz = a[4];

if(x == y)  cout<<fixed<<setprecision(5)<<x<<nl;

else if (z== y) cout<<fixed<<setprecision(5)<<z<<nl;

else if (x== z) cout<<fixed<<setprecision(5)<<x<<nl;

if(x == y)  cout<<x<<nl;

else if (z== y) cout<<z<<nl;

else if (x== z) cout<<x<<nl;

else cout<<m<<nl;
*/

ll a,b,c,d,e,f;
cin>>a>>b>>c>>d>>e>>f ;
if(b==d && f<d) cout<<fixed<<setprecision(9)<<ans(a,b,c,d) ;

else if(f==d && f>b) cout<<fixed<<setprecision(9)<< ans(c,d,e,f) ;

else if(f==b && d<b) cout<<fixed<<setprecision(9)<< ans(e,f,a,b) ;

else cout<< ans(0,0,0,0);

cout<<nl;
}

return 0;
}
