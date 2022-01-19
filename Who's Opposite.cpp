#include<bits/stdc++.h>

using namespace std;

int main()

{

    long long t;

    cin>>t;

    while(t--){

       

       int a,b,c;

       cin>>a>>b>>c;

        int dif = abs(a-b);

        int v = dif*2;

        if(a>v || b>v || c>v){

            cout<<-1<<endl;

        }

        else{

            int d = c + dif;

            if(d>v)

                d = c - dif;

            cout<<d<<endl;

        }

    }

    return 0;

}
