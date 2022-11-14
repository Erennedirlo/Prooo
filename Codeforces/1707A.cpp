#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;
  
  while(t--){
    int n,q;
    cin>>n>>q;
    int arr[n];
    
    for(int i=0;i<n;++i){
      cin>>arr[i];
    }
    
    int iq=0, solution[n]={false};
    
    for(int i=n-1;i>=0;--i){
      if(arr[i]<=iq){
        solution[i]=1;
      }

      else if(iq<q){
        ++iq;
        solution[i]=1;
      }
    }

    for(int i=0;i<n;++i){
      cout<<solution[i];
    }

    cout<<"\n";
  }
  
  return 0;
}
