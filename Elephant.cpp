#include<iostream>

#include<string>

using namespace std; 

int main()

{ 

/*int t;

cin>>t;

while(t--)

{*/

	int n;

cin >> n;

if ( n==1 || n==2 || n==3 || n==4 || n==5)

cout << 1 << "\n"; 

else if ( n >5 && n%5!=0)

cout << 1 + n/5 << endl;

else if ( n >5 && n%5==0)

cout << n/5 << endl;

return 0; 

}
