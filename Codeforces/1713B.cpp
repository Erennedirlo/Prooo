#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin>>t;

  while(t--){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;++i)
      cin>>arr[i];

    int decr=0;
    int ans=1;

    for(int i=0;i<n-1;++i){
      if(decr==0 && arr[i+1]<arr[i])
        decr=1;
      if(decr==1 && arr[i+1]>arr[i]){
        ans=0;
        break;
      }
    }

    if(ans)
      cout<<"YES"<<"\n";
    else
      cout<<"NO"<<"\n";
  }

  return 0;
}
