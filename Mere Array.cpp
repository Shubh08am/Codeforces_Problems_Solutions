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

ll n   ;
cin>>     n   ;
 ll s=0 , su=0;

 ll a[n] ; 
 rep(i,0,n)   cin>> a[i] ; 
 ll b[n] ; 
 rep(i,0,n) b[i] = a[i];

bool flg = 0;

sort(b,b+n);

rep(i,0,n) {
    if(a[i]!=b[i] && a[i]%b[0]!=0) 
    {
        flg=1;
break;
}
}
 if(flg==1) no;

else yes;

}
return 0;
}

