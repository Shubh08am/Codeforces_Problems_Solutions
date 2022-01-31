#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m;
    cin>>n>>m;
    int s=0;
    int a[n];
    for(int i=0 ; i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<m;i++)
    {      if ( a[i]<=0 )
          s+=a[i];
    }

cout << -1 * s << endl;

    return 0;
}
