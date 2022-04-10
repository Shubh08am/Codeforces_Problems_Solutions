#include<bits/stdc++.h>

using namespace std; 

#define ll long long

#define rep(i, a, b) for (ll i = a; i < b; ++i) 

signed main(){

ll t; 

cin>>t;

while(t--){ 

int n;

			cin>>n;			map<int,int> m;

			for(int i=0;i<2*n;i++)

			{

				int a;

				cin>>a;

				if(m.find(a)==m.end())

				{

					cout<<a<<" ";

					m[a]=1;

				}

			}

			cout<<endl;

}

return 0;

}
