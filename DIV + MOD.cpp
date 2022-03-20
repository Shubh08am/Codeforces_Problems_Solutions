#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define s string

int main(){
ll t;
cin>>t;
while(t--){
ll l,r,a;
cin>> l >> r >> a  ; 


// highest factor
ll x = ((r+1)/a)*a; 
// decrease by 1
x--;

// if out of range like last case of given cases  
if(x<l || x>r) x=r;

cout<< x/a + x%a <<endl;


}

return 0;}
