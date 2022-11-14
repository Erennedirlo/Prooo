#include<bits/stdc++.h>
using namespace std;
int main(){
  int N;
  cin>>N;
  int arr[4*N-1];

  int res=0;
  for(int i=0;i<4*N-1;++i){
    cin>>arr[i];
  }
  
  for(int i=0;i<4*N-1;++i){
    res ^= arr[i];
  }

  cout<<res<<"\n";

  return 0;
}
