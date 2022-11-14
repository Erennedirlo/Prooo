#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
int main(){
  unordered_map<string, int> mp;
  int N,M;
  cin>>N>>M;

  string s[N];

  for(int i=0;i<N;++i){
    cin>>s[i];
  }
  
  for(int i=0;i<M;++i){
    string str;
    cin>>str;
    mp[str] = 5;
  }

  for(int i=0;i<N;++i){
    if(mp[s[i]] == 5){
      cout<<"Yes"<<"\n";
    }
    else{
      cout<<"No"<<"\n";
    }
  }

  return 0;
}
