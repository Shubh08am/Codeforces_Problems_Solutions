
#include<bits/stdc++.h>
using namespace std;
#define ll long long

//e str string
#define vl vector<ll>

#define rep(i, a, b) for (ll i = a; i < b; ++i)
#define rev(i, a, b) for (ll i = a; i >=b; --i)
#define fo(i, n) for (ll i = 0; i < n; i++)
#define F first
#define S second
#define lb lower_bound
#define ub upper_bound
void solve(int arr[], int n)
{ bool f=0;
	long long int a = 3;

	unordered_map<int, int> m;
// sort(arr,arr+n);
	for(int i = 0; i < n; i++)
	{
		m[arr[i]]++;
	}

	for(auto i : m)
	{
		if (i.second >= 3)
		{		f=1;
			cout << i.first << endl; 
			break;

		} 
	}
		 if(f==0) { cout<<-1<<endl;}
	
}

int main()
{
	
int t;
cin>>t;
while(t--){

int n  , m , b ;
//ll cnt = 0 , s=0 ;
cin>> n   ;

 int ans = 0 ; 


 // cin >>   >>  ;
// cin >> >> >> ;


         int a[n]; 
     rep(i,0,n)  cin>>a[i];

	
	solve(a, n);
}
	return 0;
}
