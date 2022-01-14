#include <iostream>
using namespace std;
int main(){

int m=0 , sum=0 , x ;
int n , k ,w;
cin>>k>>n>>w;


for (int i=0 ; i<w ; i++)
{
    m+=k;
    sum+=m;
}

x = sum-n ;
if (x>0)
cout<<x<<"\n";

else
cout<<0<<"\n";

return 0;
}
