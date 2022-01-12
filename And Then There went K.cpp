//#include <bits/stdc++.h>

#include<iostream>

typedef long long int ll;

using namespace std;

int main()

{

    int t;

    cin >> t;

    

  while(t--)

    {

        int n;

        cin>>n;

        ll x = 1;

        while (true)

        {

            

            if(x*2>n)

            {

                cout<<x-1<<"\n";

                break;

            }

            x = x * 2 ;

        }

    }

    return 0;

}
