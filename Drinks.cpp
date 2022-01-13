//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
//#define ll long long ;
using namespace std; 

int main()
{
	float sum=0;
	int n;
cin>>n;
//double m ;
vector<long long> Arr(n);

for ( int i=0;i<n;i++)
{
cin>>Arr[i];
sum+=Arr[i];

}

//m = sum/n;

cout<<sum / n <<"\n";


return 0;

}
