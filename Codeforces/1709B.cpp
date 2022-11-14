#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n,m;
  cin>>n>>m;
  long long arr[n+1];
  long long ltor[n+1], rtol[n+2];
  ltor[0]=rtol[n+1]=0;

  for(int i=1;i<=n;++i){
    cin>>arr[i];
    ltor[i]=ltor[i-1]+max((long long)0, arr[i-1]-arr[i]);
  }

  for(int i=n;i>0;--i){
    rtol[i]=rtol[i+1]+max((long long)0, arr[i+1]-arr[i]);
  }

  while(m--){
    int a,b;
    cin>>a>>b;
    if(a<=b){
      cout<<ltor[b]-ltor[a]<<"\n";
    }
    else{
      cout<<rtol[b]-rtol[a]<<"\n";
    }
  }

  return 0;
}
