#include<bits/stdc++.h>
using namespace std;
int nextSquare(int n){
  for(int i=n;;++i){
    int root=sqrt(i);
    if(root*root==i)
      return i;
  }
}

int ans[100001];

void solve(int n){
  if(n<0)
    return;

  int next=nextSquare(n);
  int last=(next-n);

  for(int i=last;i<=n;++i){
    ans[i]=next-i;
  }

  return solve(last-1);
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;

  while(t--){
    int n;
    cin>>n;
    memset(ans, 0, n);
    solve(n-1);

    for(int i=0;i<n;++i)
      cout<<ans[i]<<" ";
    cout<<"\n";
  }

  return 0;
}
