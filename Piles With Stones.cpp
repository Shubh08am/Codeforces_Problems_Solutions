#include<iostream>
#include<vector>
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

ll n ;
cin>>n; 

int v[n];
int vv[n];

for(ll i=0 ; i< n ; i++){ 
	cin>>v[i]; }

for(ll i=0 ; i< n ; i++){  cin >> vv[i];}


ll q=0;
ll w = 0;


for(ll i=0 ; i< n ; i++){ 
q+=v[i] ; 
}
for(ll i=0 ; i< n ; i++){ 
w+= vv[i] ;
}

if(w<=q )
cout<<"Yes"<<nn;

else cout <<"No\n" ;

return 0;
}
