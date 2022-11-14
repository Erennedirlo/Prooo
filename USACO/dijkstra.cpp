#include<bits/stdc++.h>
using namespace std;

int main(){
  int N=5;
  vector<pair<int,int>> adj[N+1];


  adj[1].push_back({5,1});
  adj[1].push_back({2,5});
  adj[2].push_back({1,5});
  adj[2].push_back({3,2});
  adj[3].push_back({2,2});
  adj[3].push_back({4,6});
  adj[4].push_back({3,6});
  adj[4].push_back({5,2});
  adj[5].push_back({1,1});
  adj[5].push_back({4,2});

  int sn=1;
  int dist[N+1];
  for(int i=0;i<=N;++i)
      dist[i]=2000000;
  dist[sn]=0;

  priority_queue<pair<int,int>> pq;
  int processed[N+1]={false};

  pq.push({0,sn});

  while(!pq.empty()){
    int a=pq.top().second;
    pq.pop();
    if(processed[a]){
      continue;
    }
    
    for(auto b:adj[a]){
      int node=b.first;
      int weight=b.second;

      if(dist[node]>dist[a]+weight){
        dist[node]=dist[a]+weight;
        pq.push({-weight, node});
      }
    }
  }

  for(int i=1;i<=N;++i){
    cout<<1<<" "<<i<<" : "<<dist[i]<<"\n";
  }

  return 0;
}
