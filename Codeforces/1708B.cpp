#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    int n,l,r;
    cin>>n>>l>>r;
    int answers[n];
    int ans=1;
    for(int i=1;i<=n;++i){
      if(((l-1)/i)*i+i > r){
        ans=0;
        break;
      }
      else{
        answers[i]=((l-1)/i)*i+i;
      }
    }
    if(ans){
      cout<<"YES"<<"\n";
      for(int i=1;i<=n;++i)
        cout<<answers[i]<<" ";
      cout<<"\n";
    }
    else
      cout<<"NO"<<"\n";
  }
  return 0;
}
