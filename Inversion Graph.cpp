#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define  ld long double
#define int long long
 
#define  pi pair<int, int>
#define  pl pair<ll, ll>
#define  pd pair<ld, ld>
#define  vi vector<int>
 
typedef  long double lld;
typedef  pair<int, int> pii;
typedef  vector<ll> vl;
typedef  vector<pii> vpii;
typedef  vector<pl> vpl;
typedef  vector<vi> vvi;
typedef  vector<vl> vvl;
 
#define vl vector<ll>
#define vd vector<ld>
#define vpi vector<pi>
#define vpl vector<pl>
#define rep(i, a, b) for (ll i = a; i < b; ++i)
#define rev(i, a, b) for (ll i = a; i >=b; --i)
#define fo(i, n) for (i = 0; i < n; i++)
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
 
/*template <class T>
using pq = priority_queue<T>;*/

const char nl = '\n';
 
ll inf = 1e18;
ll mod = 1000000000 + 7;
int MAXN = 1010101;
using namespace std;


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
ll t;
cin>>t;
while(t--)
{
/*
ll n;
cin>>n;
ll * a = new ll[n];
ll * b = new ll[n];
rep(i,0,n)  cin>>a[i];

ll i , cnt=0;

if(n==1)  cout<<a[0]<<nl;

else if (n>1){
rep(i,0,n) b[i] = a[i];

sort(a,a+n);

rep(i,0,n){
    if(a[i]==b[i]) cnt++;
}
if(cnt==n) {
    rep(i,0,n) { cout<<b[i]<<" ";}
    cout<<nl;
}

else if (cnt!=n){ 
    rep(i,1,n) {
         if(b[i]<b[i-1]){ 
    swap(b[i-1],b[i]);
    break;}}
rep(i,0,n) { cout<<b[i]<<" ";}
}
cout<<nl;
}*/


ll n;
cin>>n;
vector<ll>v;
ll cnt=0 , a=0;
for(ll i=0 ; i<n; i++){
    ll m ; 
    cin>>m;
v.push_back(m);
}
rep(i,0,n) {
    a = max(a, v[i]);
    if(i+1 == a)  
    {cnt++;}
}
cout<<cnt<<nl;
}
return 0;
}
