#include <iostream>
#include<string>
using namespace std;
int main() { 
int t;
cin >> t;
while(t--){

   int n; cin>>n;
   bool flag =0;
   string s = to_string(n);
   if(n%2 ==0){
	   cout<<0<<endl; 
	   continue;
	   }
	   
    int m=s.length();
    
    if((s[0]-'0')% 2 ==0){
cout<<1<<endl; 
continue;		
		}
 
for(int i=0 ; i<m;i++){
	
	if(s[i]% 2 ==0){
		flag=1;
		}
	}
if(flag){
	cout<<2<<endl;
	}else{
		cout<<-1<<endl;
		}
	
}
 
return 0;
}
