#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  int a,b;

  cin>>s;
  cin>>a>>b;

  char tmp = s[a-1];
  s[a-1] = s[b-1];
  s[b-1] = tmp;

  cout<<s<<"\n";

  return 0;
}
