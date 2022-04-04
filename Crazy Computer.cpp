#include <bits/stdc++.h>
using namespace std;

int main() {
 long long int n,c;
  cin>>n>>c;
  long long a[n],cnt=0;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n-1;i++){
       if(a[i+1]-a[i]<=c)
        cnt++;
       else
        cnt=0;
  }
  cout << cnt+1 << endl;

return 0;
}
