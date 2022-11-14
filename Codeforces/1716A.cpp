#include<bits/stdc++.h>
using namespace std;

int solve(int a, int counter){
  if(a%3==0){
    return counter+a/3;
  }
  else if(a%3==1){
    return solve(a-4, counter+2);
  }
  else{
    return solve(a-2, counter+1);
  }
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  
  int t;
  cin>>t;

  while(t--){
    int n;
    cin>>n;
    
    if(n==1)
      cout<<2<<"\n";
    else
    cout<<solve(n,0)<<"\n";
  }

  return 0;
}
