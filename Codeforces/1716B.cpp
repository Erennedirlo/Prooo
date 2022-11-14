#include<bits/stdc++.h>
using namespace std;

void solve(int length, int counter){

  for(int i=1;i<=length;++i){
    if(i<counter){
      cout<<i+1<<" ";
    }
    else if(i==counter){
      cout<<1<<" ";
    }
    else{
      cout<<i<<" ";
    }
  }
  cout<<"\n";

  if(counter == length)
    return;

  if(counter < length)
  return solve(length, counter+1);
}


int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin>>t;

  while(t--){
    int n;
    cin>>n;
    
    cout<<n<<"\n";
    solve(n,1);
    cout<<"\n";
  }

  return 0;
}
