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
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl
 

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

ll n  , s =0  , su=0 ,suu=0, ss=0  , sr=0 , sss=0;
cin>>n    ;
ll a[n];
rep(i,0,n) cin>> a[i];
sort(a,a+n,greater<ll>());
/*
ll m = ceil(n/2.0) ;
ll mm = n/2;


if(n%2!=0) {
rep(i,0,m) {
    s+=a[i];
}}

if(n%2!=0) {
rep(i,0,n/2) {
    sr+=a[i];
}
}
else if ( n%2==0) {
    rep(i,0,m+1) sss+=a[i] ;
}

if(n%2!=0) {
rep(i,m+1,n){
    su+=a[i];
}}

if(n%2==0) {
rep(i,n/2+2,n){
    suu+=a[i];
}}

if(n==3) {
    if(a[0]+a[1] < a[2]) yes ;

    else no ;
}

else if(n%2!=0 && n!=3) {
    if(sr < a[n-1] ) yes;

else if(su > s)  yes;
else no;
}

else if(n%2==0) { 
    if(suu > sss)  yes;
else if ( a[n-1] > sss)  yes;

else no;
}
else no;
*/

ll q = 0 ; ll e = a[n-1];
ll i = 0 ; 
ll j = n-2;
bool flg = 0;

while(i< j){
    q+=a[i];
    e+=a[j] ;
    i++;
    j--;

    if(q>e) {flg=1; break;}
}
if(flg) yes;

else no;

}

return 0;}
