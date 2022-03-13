#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define in insert 
#define fo(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl
 
const char nl = '\n';
ll inf = 1e18;
ll mod = 1000000000 + 7;
int MAXN = 1010101;


int main(){

int t;
cin>>t;
while(t--){

     ll N, K;
        cin >> N >> K;
        vector<pair<ll, ll>> v(N);
        for (ll i = 0; i < N; i++)
        {
            cin >> v[i].first;
        }
        for (ll i = 0; i < N; i++)
        {
            cin >> v[i].second;
        }
        sort(v.begin(), v.end());
        for (ll i = 0; i < N; i++)
        {
            if (v[i].first > K)
                break;
            K += v[i].second;
        }
        cout << K << nl;
}
return 0;
}

