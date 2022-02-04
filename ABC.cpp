#include <bits/stdc++.h>

using namespace std;

#define ll long long

signed main()

{

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    cout.tie(NULL);

    ll t = 1;

    cin >> t;

    while (t--)

    {

        ll n;

        cin >> n;

        string s;

        cin >> s;

        if( n == 1 )

         cout << "YES" << endl; 

                          

       else  if(n==2) 

         {

            if( s[0] == s[1] )

                cout << "NO" << endl;

            

            else if ( s[0]!=s[1] )

                cout << "YES" << endl;

                 }

       

        else

            cout << "NO" << endl;

        

        

    } 

    return 0;

}
