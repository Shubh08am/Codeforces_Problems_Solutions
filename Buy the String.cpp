#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t; while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    string s ; cin>>s;
	    int cnt=0 , co=0 ; 
	    int h=d;
	    for(int i=0;i<a ; i++){
	        if(s[i]=='1') cnt++;
	        
	        else co++;
	    }
	    if(cnt==a) { 
	        
	        int nn = cnt*c ;
	        int nnn = cnt*h + cnt*b;
	        cout<<min(nn,nnn)<<endl;
	    }
	    else if(co==a) {
	        int mm = co*b ;
	        int mmm = co*h + co*c;
	        cout<<min(mm,mmm)<<endl;
	    }
	    else if ( cnt!=a && co!=a){ 
	        cout<< min({co*h+(cnt+co)*c , cnt*h+(cnt+co)*b , cnt*c+co*b})<<endl;
	        
	        
	    // cout<< min(co*b+cnt , co*b+cnt*co)<<endl;
	}
	
	
	}
	return 0;
}
