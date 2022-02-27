#include<bits/stdc++.h>
#include<iostream>
using namespace std;

#define ll long long
#define  ld long double
#define int long long
 
#define rep(i, a, b) for (ll i = a; i < b; ++i)
#define rev(i, a, b) for (ll i = a; i >=b; --i)
#define fo(i, n) for (ll i = 0; i < n; i++)
#define all(x) (x).begin(), (x).end()
 
#define Sort(x) sort(all(x))
#define out(x) cout << x << "\n";
 
const char nn = '\n';
 
ll inf = 1e18;
ll mod = 1000000000 + 7;
int MAXN = 1010101;

void ans()
{
ll n,cnt=0;
cin>>n;
ll * v = new ll [n];
//vector <ll > v ; 
rep(i,0,n)  cin>>v[i];

if ( n<=2) {
	 cout << 0 << nn;
	for(int i= 0 ; i< n ; i++)
{ cout << v[i]<< " ";
}
cout << nn ;
return ;
}			

for(ll i=1 ; i<n-1;i++) {
	ll q;
	if( v[i] >v[i-1]  && v[i]>v[i+1] ) 
{	    ll w =  v[i] ;
  	/*    ll e = v[i] - v[i+1] ;
	    w = v[i+1] + e;
	      cnt++;*/ 
if  (i+2 < n) 
{
	q  =  v[i+2] ; }
	else {   q = -1;}	

ll ee = max(q,w);
v[i+1] = ee; cnt++;
}}

	cout << cnt << nn;
	      	
	for(int i= 0 ; i< n ; i++)
{ cout << v[i]<< " ";
}
cout << nn ;

	      	delete [] v ;	      	
}


// cout << cnt << nn;		

signed main(){
ll t;
cin>>t;
while(t--)
{
	ans ();
//	delete [] v ;
	}
	/*
ll n,cnt=0;
cin>>n;
vector<ll>v;
rep(i,0,n)  cin>>v[i];

for(ll i=1 ; i<n-1;i++) {
	
	if(( v[i] >v[i-1] ) && (v[i]>v[i+1] ) )
{	    ll w =  v[i+1] ;
  	    ll e = v[i] - v[i+1] ;
	    w = v[i+1] + e;
	      cnt++;	
}}

cout << cnt << nl;
*/ 
//delete [] v ;
return 0;
}
