// Written by: Erennedirlo, 19/09/2022
#include <bits/stdc++.h>
using namespace std;

int n,x,y;

void write(){
  int nonzero;
  if(x!=0){
    nonzero=x;
  }
  else{
    nonzero=y;
  }

  int cur=1;
  int times=0;
  for(int i=2;i<=n;++i){
    if(times<nonzero){
      cout<<cur<<" ";
      ++times;
    }
    else{
      times=1;
      cur=i;
      cout<<cur<<" ";
    }
  }
  cout<<"\n";
}

void solve(){
  cin>>n>>x>>y;

  if((x!=0 && y!=0) || (x==0 && y==0)){
    cout<<-1<<"\n";
    return;
  }
  
  int nonzero;
  if(x!=0){
    nonzero=x;
  }
  else{
    nonzero=y;
  }

  if((n-1)%nonzero){
    cout<<-1<<"\n";
    return;
  }

  else{
    write();
  }

}


int main() {
  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);

  int t;
  cin>>t;

  while(t--){
    solve();
    n=x=y=0;
  }
  

  return 0;
}
