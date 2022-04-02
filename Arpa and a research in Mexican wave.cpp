#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,y,t;
	cin>>n>>y>>t;
	
	cout<<min({t,y,n+y-t});
	return 0;
}
