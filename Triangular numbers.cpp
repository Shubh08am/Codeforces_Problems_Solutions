#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define s string

int main(){
/*ll t;
cin>>t;
while(t--){*/
ll l;
cin>> l   ; 
 bool flag=0;
for(ll i=1;i<=l ;i++){
if(i*(i+1)/ 2 == l ) {flag=1;
break;}
}
if(flag) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
//}

return 0;}
