#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
    int  n;
    cin>>n;
int a[n];

    for(int i=0;i<n;i++)
    {cin>>a[i];}
     
     sort(a,a+n);
    

/*
if(n==1)
cout<<"YES\n";
*/

// APPROACH 1
   bool flag = true;

        for(int i=1;i<n;i++){
            if(a[i]-a[i-1] >1 ){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
        
        //APPROACH 2
int m=0;


        for(int i=1;i<n;i++){
            if(a[i]-a[i-1] >1 ){
               m++;
            }
        }
        if(m>0){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
        }

}
return 0;
}
