#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<cmath>
#include<iomanip>
#include<algorithm>
using namespace std; 
#define ll long long 
#define rep(i, a, b) for (ll i = a; i < b; ++i) 

signed main(){
ll t; 

cin>>t;
while(t--){
ll n; cin>>n;
ll cnt = 0;
string s ; cin >> s;
rep(i,1,n){
if(s[i]== '0' and s[i-1] == '0') cnt+=2;


else if(s[i]=='1' and s[i-1] =='0' and s[i+1]=='0')cnt+=1;

} 

cout <<cnt << endl ; 

// ll a[n];
// rep(i,0,n) cin>>a[i]; 



}
return 0;
}
