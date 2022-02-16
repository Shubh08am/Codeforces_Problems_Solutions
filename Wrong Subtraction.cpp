#include <iostream>

using namespace std;

int main(){

long long int n,k; 

cin>>n>>k;

/*

    long long int n,k;

    cin >> n >> k;

    for(int i=0;i<k;i++)

    {

        if(n%10==0)

            n/=10;

        else

            n--;

    }

    cout << n;

*/

while(k>0){ 

   long long int a=n%10;

    if(a==0) {n/=10; k--;}

    if(a!=0) {n--; k--;}

}

cout<<n<<endl;

return 0;

}
