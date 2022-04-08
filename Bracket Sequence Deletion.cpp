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
 #define str string 

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
ll n  , b ,v          ;
cin >>  n             ;
str ss;
cin>>ss;
ll c=0 , cc=0 , cnt=0 , p=0;

rep(i,0,n){
    if(ss[i]==')') c++;
    
    else cc++;
}

/*
if(c==0 || cc==0)  cout<< n/2 <<" "<<0<<nl;
 else if (c==cc)   cout<< n/2 <<" "<<0<<nl;
     else if(abs(c-cc)==1) {
    if(c>cc ) cout<<abs(c-cc)<<" "<<0<<nl;
    else if(cc>c) cout<<abs(c-cc)<<" "<<abs(c-cc)<<nl;
     }
     
*/
stack<char> bk;   
// also push it 
bk.push(ss[0]);

  rep(i,1,n){
        if(bk.empty()==0){  // not emp..
            if(bk.top() == '(' && ss[i] == ')')
            bk.pop();
            
            else bk.push(ss[i]);
            if(bk.empty()){
                cnt+=1;
                p = i+1;
            }
        }
        else bk.push(ss[i]);
        if(ss[i] == ss[p] && i > p){
            p = i+1;
            while(!bk.empty()){
                bk.pop(); // pop it
            }
            cnt++;
        }
    }
    if(bk.empty()==0){
        ll ans = n-p;
        cout << cnt << " "<< ans << endl ;
    }
    else     cout << cnt << " "<< 0 << endl;
    
}


return 0;}
