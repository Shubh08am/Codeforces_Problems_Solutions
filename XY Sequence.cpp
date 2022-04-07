#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  ld long double
#define int long long


#define vl vector<ll>

#define rep(i, a, b) for (ll i = a; i < b; ++i)
#define rev(i, a, b) for (ll i = a; i >=b; --i)
#define fo(i, n) for (ll i = 0; i < n; i++)
#define F first
#define S second
#define lb lower_bound
#define ub upper_bound3

#define setp(x) setprecision(x) << fixed
#define in insert
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
 
#define Sort(x) sort(all(x))
#define out(x) cout << x << "\n";
#define trav(i, v) for (auto &i : v)
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define take(v) trav(i, v) cin >> i;
#define no cout<<"No"<<endl
#define yes cout<<"Yes"<<endl
 

const char nl = '\n';
 
ll inf = 1e18;
ll mod = 1000000000 + 7;
int MAXN = 1010101;

unsigned int gcd(unsigned int a ,unsigned int b)
{
    /* base condition*/ 
    if(b==0) return a;
    return gcd (b,a%b );
}

ll lcm(ll a, ll b){
    return (a*b)/gcd(a,b);
}

ll  fact(ll  n){
    if(n==0) return 1;

    return n *fact(n-1);
}

/*
void ans(){
    
}
*/
signed main(){

ll t;
cin>>t;
while(t--){
ll n  , B , x , y        ;
cin >>  n   >> B >> x >> y           ;
ll s = 0;
        /*vl v;
        v.pb(0);*/ ll v[n]; v[0]=0;
       rep(i,1,n+1) {if (v[i - 1] + x <= B)
            { v[i] = v[i - 1] + x;
            }
            else
            {   v[i] = v[i - 1] - y;
            }
        }
        rep(i,0,n+1)
        {s = s+ v[i];
        }
        cout << s << nl;
    

}

return 0;}
