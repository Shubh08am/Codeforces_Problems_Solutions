#include <iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
 
vector<double>v;

    long long int n,k;
    long double o , cnt=0;
    cin >> n >> k;
    for(double i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
}
for(int i=0;i<n;i++)
    {
        long double o = ceil(v[i]/k) ;
         cnt=cnt+o;
    }
cout<<cnt<<endl;
return 0;
}
