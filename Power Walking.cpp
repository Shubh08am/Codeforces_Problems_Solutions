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

signed main(){
ll t;
cin>>t;
while(t--)
{
   
ll cnt=0, n;
cin>>n;
/*
ll * a = new ll [n];
rep(i,0,n)  cin>>a[i];
*/

map<ll,ll> mp;
rep(i,0,n){
    ll q; cin>>q;
    mp[q]++ ;
    if(mp[q] > cnt) { cnt=mp[q];}

}

ll y = mp.size();

for(ll j= 1 ; j<=n ; j++ ){
    if(j<= y) {cout<< y<<" ";}

else { y+=1;
cout<<y<<" ";}

}
cout<<nl;

}
return 0;
}


