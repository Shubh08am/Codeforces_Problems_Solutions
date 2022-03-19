#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
ll cnt=0,k=0;	
string a  , s ="hello";
cin>>a;
 bool flag=0;
for(int i=0;i<a.size();i++){
	if(a[i]==s[k]){		k++;		cnt++;	}

	if(cnt==5){	flag=1;	break;	}
	
}
if(flag)	cout<<"YES";
else	cout<<"NO";

return 0;
}
