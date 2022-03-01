#include<bits/stdc++.h>
using namespace std; 

#define ll long long 

#define rep(i, a, b) for (ll i = a; i < b; ++i) 

const char nn = '\n'; 

signed main(){
ll t;
cin>>t;
while(t--){
ll n ;
string s;
cin>>s;
n = s.size();
ll a,b,c,d,e,f; 

rep(i,0,n){ 
if(s[i] == 'r') {a= i; } 

else if (s[i] == 'g') {b= i; } 

else if (s[i] == 'b') {c= i; } 

else if (s[i] == 'G') {d= i; } 

else if (s[i] == 'B' ) {e= i; } 

else if (s[i] == 'R') {f= i; } 

}
if( (a < f ) &&( b<d) && (c<e )){
cout<<"YES"<<nn;
}

else
cout<<"NO"<<nn;
} 

return 0;
}
