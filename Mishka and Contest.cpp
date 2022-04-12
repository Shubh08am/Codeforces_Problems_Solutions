#include<iostream>

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

signed main(){

ll n,k     ;

cin>>  n   >>k           ;

  

  ll a[n]; 

      rep(i,0,n)  cin>>a[i];

int left=0 , pos=0 , c=0 , cc=0;

for(int i=0; i<n; i++){

        if(a[i] <= k){

            c++;

        }

        else if(a[i] > k){

            pos=i+1;

            break;

        }

    }

    if(pos>0 && pos<n){

        for(int i=n-1; i>=pos; i--){

            if(a[i] <= k){

                c++;

            }

            else if(a[i] > k){

                break;

            }

        }

    }

    

//cout<<c<<" " <<cc<<nl;

cout<<c<<nl;

return 0;}
