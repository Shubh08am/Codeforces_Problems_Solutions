#include <iostream>
using namespace std;

void solve(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
long long int count=0;
    for(int j=29;j>=0;--j){
      long long int c=0;
        for(int i=0;i<n;i++){
            if((arr[i] >= (1<<j))&&(arr[i]<(1<<(j+1))))
                c++;
        }
        count+=c*(c-1)/2;
    }
    cout<<count<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
