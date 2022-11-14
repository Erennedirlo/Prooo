#include<bits/stdc++.h>
using namespace std;
int hourDiff(int H, int M, int tmph, int tmpm){
  int curtime=H*60+M, desttime=tmph*60+tmpm;
  if(desttime<curtime){
    return 24*60-(curtime-desttime);
  }
  else{
    return desttime-curtime;
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;

  while(t--){
    int n,H,M;
    cin>>n>>H>>M;
    int sleepTime=INT_MAX;

    while(n--){
      int tmph,tmpm;
      cin>>tmph>>tmpm;
      sleepTime=min(sleepTime,hourDiff(H,M,tmph,tmpm));
    }
    
    int ansh=sleepTime/60, ansm=sleepTime%60;
    cout<<ansh<<" "<<ansm<<"\n";
  }

  return 0;
}
