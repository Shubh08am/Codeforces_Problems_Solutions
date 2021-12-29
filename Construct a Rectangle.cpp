#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define ar array
#define ll long long
#define ld long double
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
#define all(a) (a).begin(), (a).end()

int main()
{

int t;
cin>>t;
while(t--) {

 vector <ll> Arr(3);
 cin>>Arr[0]>>Arr[1]>>Arr[2];
sort(all(Arr));

if(Arr[2]==(Arr[1] + Arr[0])) 
cout<<"YES\n";

else if (Arr[0]==Arr[1]) {
    if(Arr[2]%2==0) 
    cout<<"YES\n";

    else cout<<"NO\n";
    }
    
     else if(Arr[1]==Arr[2]) 
     {
         if( Arr[0]%2==0) 
         cout<<"YES\n";

          else cout<<"NO\n";
          }
          else cout<<"NO\n";
        
}
return 0;
}
