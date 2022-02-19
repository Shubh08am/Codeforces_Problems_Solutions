#include <iostream>
#include <cmath>
using namespace std;
#define ll long long 


int main()
{
 ll n,t,i;
    cin >> n>>t ;
    string s;
    cin>>s;
    
    while(t--)
    {
          for(i =1;i<n;i++)
        {
            if(s[i]=='G' && s[i-1]=='B')
            {
            //    s[i-1]='G';
                //s[i]='B';
             swap(s[i],s[i-1]);
             i++ ;
            }
        }}
        cout<<s<<endl;
    
   //} 
    return 0;
}
