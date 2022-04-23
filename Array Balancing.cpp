#include<iostream>
using namespace std; 

#define ll long long
#define rep(i, a, b) for (ll i = a; i < b; ++i) 

signed main(){
ll t; 
cin>>t;
while(t--){ 

ll n;
cin>>n;
ll * a = new ll [n];
ll * b = new ll [n];

rep(i,0,n) cin >> a[i];
rep(i,0,n) cin >> b[i];

ll first_diff  = 0 ;
ll second_diff  = 0 ; 
ll ans = 0;
rep(i,1,n){
	
	first_diff =  abs(a[i]-a[i-1]) + abs(b[i]-b[i-1]);
	
	second_diff =  abs(b[i]-a[i-1]) + abs(b[i-1]-a[i]);	

ans = ans + min(first_diff , second_diff);
	
}
cout << ans << "\n";
delete[]a;
delete[]b;
}
return 0;
}
