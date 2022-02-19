#include <iostream>
#include <string>
#include<vector>
using namespace std;
#define ll long long 

int main() { 

ll  n;
cin >> n;
string  a , s;
    ll cnt=1;
  
cin>> a;     
   
    
  for(ll i= 1 ; i<n ; i++ )
    {
        cin >> s;
        if(a!=s)
        {
            cnt++;
            a=s;
        }
        
    }
    cout<<cnt<<endl;

return 0;
}
