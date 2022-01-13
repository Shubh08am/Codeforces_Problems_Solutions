#include<bits/stdc++.h>
#include<vector>
typedef long long ll ;
using namespace std;

int main( )
{
    ll t;
    cin>>t;

    while(t--)
    {
     ll n,l,r,k;
     cin>> n>> l>> r>> k;
     vector<ll> a(n);

     for (ll i=0;i<n;i++)
     {
         cin>>a[i];
     }
    
    
    sort(a.begin() , a.end() );
    ll ans = 0;
    for( ll i=0 ; i<n ; i++)
    {
        if (a[i]>k)
        break ;
        if( a[i]>=l && a[i]<=r)
          { ans++;
          k = k - a[i];
    }
    }
cout << ans << endl;
    }
return 0;
}
