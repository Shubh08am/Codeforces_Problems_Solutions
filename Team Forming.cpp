#include<bits/stdc++.h>

using namespace std;

int main()

{

    int n;

    cin>>n;

    

    vector<int>v(n);

    for(int i=0;i<n;i++)

    {

        cin>>v[i];

    }

    

    sort(v.begin(),v.end());

    int sum=0;

    for(int i=0;i<n ;i=i+2)

    {

        sum+=v[i+1]-v[i];

    }

    cout<<sum<<endl;

    return 0;

}
