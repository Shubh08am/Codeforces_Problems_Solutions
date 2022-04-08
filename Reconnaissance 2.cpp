#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
	// your code goes here
 int n ;
cin >> n ;
    int x,y ;
    int a[n] ;
    for(int i=0 ; i<n ; i++)
       { cin >> a[i] ; }
 
    int mn = 1e18 ;
 
    for(int i=0 ; i<n ; i++)
    {
        int j = (i+1)%n ;
 
        mn=min(mn, abs(a[i]-a[j]) ) ;
 
        if(mn == abs(a[i]-a[j]))
        {
            x=i ;
            y=j ;
        }
 
    }
 
    cout << x+1 << " " <<  y+1 << endl ;
	return 0;
}
