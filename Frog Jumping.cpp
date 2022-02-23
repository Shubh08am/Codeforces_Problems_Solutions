#include <iostream>
using namespace std;
int main() { 
int t;
cin >> t;
while(t--){
long long int a,b,k;
cin >> a >> b >> k; 

if(k%2==0)
cout << k/2 * (a - b) << endl;

else
{
cout << (k/2 +1)* a - (k/2) *b<< endl;
}
}
return 0;
}
