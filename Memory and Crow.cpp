#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define s string

int main(){
/*ll t;
cin>>t;
while(t--){*/
ll n;
cin>> n   ; 
 bool flag=0;
 ll a[n]; 
 for(ll i=0;i<n;i++){
     cin>>a[i];
 }
 
for(ll i=1;i<n ;i++){
a[i-1] = a[i]+a[i-1];
}

for(ll i=0;i<n;i++){
    cout<<a[i]<<" ";
}

return 0;}
