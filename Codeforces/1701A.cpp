#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;
  
  while(t--){
    int sum=0, tmp;

    for(int i=0;i<4;++i){
      cin>>tmp;
      if(tmp){
        ++sum;
      }
    }

    if(sum>3){
      cout<<"2"<<"\n";
    }

    else if(sum){
      cout<<"1"<<"\n";
    }

    else{
      cout<<"0"<<"\n";
    }
  }

  return 0;
}
