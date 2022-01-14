#include <iostream>
using namespace std;
int main(){

int t;
cin>>t;
while(t--)
{
    int a,b , m ;
    cin>>a>>b;

    int cnt = 0 ;

    if(a%b == 0)
    cout<<0<<"\n";

    else
    cout << b - a%b << endl ;
       // cout<<m<<"\n";

}
return 0;
}
