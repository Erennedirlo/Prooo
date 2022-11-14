#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;

  while(t--){
    int x;
    int arr[3];
    cin>>x>>arr[0]>>arr[1]>>arr[2];
    int cevap=1;
    
    for(int i=0;i<3;++i){
      if(x>0 && x<=3){
        x=arr[x-1];
      }
      else{
        cevap=0;
        break;
      }
    }
    
    if(cevap){
      cout<<"YES"<<"\n";
    }
    else{
      cout<<"NO"<<"\n";
    }
  }
  return 0;
}
