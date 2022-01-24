#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)
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

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef pair<int, int>pii;
typedef pair<ll, ll>pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii>vpii;
typedef vector<pl>vpl;
typedef vector<vi>vvi;
typedef vector<vl>vvl;
typedef map<ll,ll>mpl;
typedef unordered_map<ll,ll>umpl;

const ll MAXN = 2e5+5;
const ll M = 1e9+7;

void solve(){
ll n ; 
cin>>n;
 
if(n%2==0)
{
    int m = 4 ;
    int x = n - m;
    cout<< x << " "<<m << endl;
} 

else if ( n%2!=0)
{
    int z = 9 ;
    int u = n - z;
    cout<<z << " " << u << endl;
}
}

int main(){
 
     solve();
        

return 0;
}
