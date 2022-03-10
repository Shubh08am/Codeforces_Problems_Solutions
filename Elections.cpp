#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll ok(ll a, ll b, ll c){
    ll original_a = a;
    a+=max(0LL,b-a+1);
    a+=max(0LL,c-a+1);
    return a - original_a;
}

void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    cout<<ok(a,b,c)<<" ";
    swap(a,b);
    cout<<ok(a,b,c)<<" ";
    swap(a,b);
    swap(a,c);
    cout<<ok(a,b,c)<<" ";
    cout<<"\n";
}
                
int main(){
  
   
            int t=1;
            cin>>t;
      while(t--){
                solve();
    }
    return 0;
}
