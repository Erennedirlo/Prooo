#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n,t;
  cin>>n>>t;
  vector<long long int> goods(n+1);
  for(int i=0;i<n;++i)
    cin>>goods[i+1];
  goods[0]=0;

  sort(goods.begin(), goods.end());
  
  
  for(int i=1;i<=n;++i)
      goods[i]+=goods[i-1];
  
  while(t--){
    int buy,beles;
    cin>>buy>>beles;
    cout<<goods[n-buy+beles]-goods[n-buy]<<"\n";
  }
   
  return 0;
}
