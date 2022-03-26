#include<bits/stdc++.h>

using namespace std ;

 

#define rep(i,a,b) for (int i=a;i<b;i++)

#define ll long long 

 

int main (){

 

vector <ll> v;

for (ll i = 1 ;i<=1e9 ;i=3*i){

   v.push_back (i);

}

    ll t;

    cin>>t ;

    while (t--){

       ll n ;

       cin>> n ;

   

      if (v.size () >= n){

         cout << "YES\n";

     rep (i,0,n)

         cout << v[i]<< " ";

         cout << "\n";

      }

      else cout << "NO\n";

         // cout << "\n";

    }

}
