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
#define no cout<<"No"<<endl
#define yes cout<<"Yes"<<endl
 

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

signed main(){
/*ll t;
cin>>t;
while(t--)
*/

ll n,m;
cin>>n;
m = 2*n;
ll a[m] ; 
ll b[m];
ll cnt=0 , c=0 , co=0;

rep(i,0,m) cin>>a[i];

rep(i,0,m) b[i]=a[i];

for(ll i=1 ; i<m ; i+=2){
    if(a[i-1]>a[i] || a[i]>a[i-1]) cnt++;
}

sort(b,b+m,greater<int>()) ;

rep(i,0,m){
    if(b[i]!=a[i]) c++;
}

if (cnt>=1) cout<<"rated\n";

else if (c>=1) cout<<"unrated\n";

else if(c==0)  cout<<"maybe\n";


return 0;}
