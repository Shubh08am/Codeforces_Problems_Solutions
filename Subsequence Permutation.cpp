#include <bits/stdc++.h>
#include <iostream>
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

ll i,n ,c=0;
cin >> n;
string r,s;
cin>>s  ;
r = s;
ll o = s.size();
sort(s.begin() , s.end()) ;


for(i=0;i<o;i++)
 {   if(s[i]!= r[i])
 c++;
 }
 
 cout<<c<<nl;
 }

return 0;
}
