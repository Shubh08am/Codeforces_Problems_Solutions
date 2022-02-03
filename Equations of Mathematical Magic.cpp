#include <iostream>
#include <cmath>
using namespace std;
#define ll long long
void solve() {
ll n;
cin>>n;
ll cnt=0;
while(n){
if(n&1){
cnt++;
}
n/=2;
}
ll r=pow(2,cnt);
cout<<r<<endl;
}
int main() {
ll t ;
cin >> t;
while (t--)
{
solve();
}
return 0;
}
