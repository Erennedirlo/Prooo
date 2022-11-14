#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;
  
  while(t--){
    int s;
    cin>>s;

    stack<int> number;
    
    for(int i=0;s>0;s-=9-i,++i){
      number.push((s>(9-i)?(9-i):(s)));
    }
    
    while(!number.empty()){
      cout<<number.top();
      number.pop();
    }
    
    cout<<"\n";
  }
  
  return 0;
}
