#include <iostream>
#include <vector>
using namespace std;
#define ll long long 

int main() { 

int t;
cin >> t;
while(t--){
	
ll cnt=0, n , s=0;
cin >> n;
ll * v = new ll [n] ;

for(ll i=0;i<n;i++){
	 cin>>v[i];
} 

for(ll i=0;i<n;i++){
	if(v[i]==0)
	{v[i] = v[i] + 1;
	cnt++;}
}

for(ll i=0;i<n;i++){ 
s+=v[i];
}

if(s !=0) cout<<cnt <<endl;

else if(s==0) cout<< cnt+1<<endl;

}
return 0;
}
