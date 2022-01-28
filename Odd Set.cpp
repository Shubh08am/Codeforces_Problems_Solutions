#include <iostream>

using namespace std;

int main(){

int t;

cin>>t;

while(t--)

{

    int n;

    cin>>n;

    int m = 2*n;

    

    int a[m];

    int cnt=0;

    for(int i=0 ; i<m ;i++)

    {

        cin>>a[i];

    }

    for(int i=0 ; i<m ;i++)

    {

        if (a[i]%2==0)

        cnt++;

    }

   

 if  ( cnt==n)

        cout<<"Yes\n";

       

        else 

        cout <<"No"<<endl;

    

}

return 0;

}
