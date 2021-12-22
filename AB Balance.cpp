#include<iostream>
#define ll long long
#define ull unsigned long long
ll mod=1000000007;
#include<string>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    
    while(t--) {
        
    string s;
    cin>>s;
    ll n=s.size();
    char first=s[0],last=s[n-1];
    
    if(first!=last) 
    s[0]=s[n-1]; //s[n-1]=s[0]
    cout<<s<<endl;
    }  
     return 0;
}
