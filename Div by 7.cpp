/*** Jai Shree Ram ***/
/** Template **/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define int long long

#define pi pair<int, int>
#define pl pair<ll, ll>
#define pd pair<ld, ld>
#define vi vector<int>

typedef long double lld;
typedef pair<int, int> pii;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

#define vl vector<ll>
#define vd vector<ld>
#define vpi vector<pi>
#define vpl vector<pl>
#define rep(i, a, b) for (ll i = a; i < b; ++i)
#define fo(i, n) for (i = 0; i < n; i++)
#define F first
#define S second
#define lb lower_bound
#define ub upper_bound
#define setp(x) setprecision(x) << fixed
#define in insert
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

#define Sort(x) sort(all(x))
#define out(x) cout << x << "\n";


const char nl = '\n';

ll inf = 1e18;
ll mod = 1000000000 + 7;
int MAXN = 1010101;

// Sieve Method Write

int gcd(int a, int b)
{

    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int power(int a, int b)
{

    int res = 1ll;
    while (b > 0)
    {
        if (b % 2ll)
            res = (res * a);
        a = (a * a);
        b /= 2ll;
    }
    return res;
}

int fact(int n)
{

    int res = 1;
    for (int i = 2; i <= n; i++)
    {
        res = (res * i) % mod;
    }
    return res % mod;
}

bool isPrime(int n)
{

    if (n == 1)
    {
        return 0;
    }

    if (n == 2)
    {
        return 1;
    }

    for (int i = 2; i < n; ++i)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll tc = 1;
    cin >> tc;

    while (tc--)
    {
        
        int x, n;
        cin >> n;
        x = n ;
        x= x/ 10;
        int y = n%10;

        if( n % 7 == 0 ){
            cout << n << endl;
        continue;
        }

        int z = n%7;
        if( y-z >= 0 ){
            cout << n-z<< "\n";
        }
        else{
            cout << n + (7-z) << endl;
        }

    }
}
