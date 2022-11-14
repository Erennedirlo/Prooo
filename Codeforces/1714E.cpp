#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin>>t;

  while(t--){
    int n;
    cin>>n;
    int prevtmp,tmp,num,ans=1;;

    for(int i=0;i<n;++i,prevtmp=tmp){
      cin>>num;
      if(num%10==1 || num%10==2 || num%10==4 || num%10==8){
        tmp=(num/10)%2;
      }
      else if(num%10==0 || num%10==5){
        tmp=((num%10==0)?(num/10+2):(num/10+3));
      }
      else{
        tmp=(num/10+1)%2;
      }
      
      if(i!=0 && tmp!=prevtmp){
        ans=0;
      }
    }

    if(ans)
      cout<<"YES"<<"\n";
    else
      cout<<"NO"<<"\n";
  }

  return 0;
}
