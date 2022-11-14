// Written by: Erennedirlo, 14/10/2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, m;
vector<int> adj[100005], num(100005), visited(100005);

int main() {
  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);

  cin >> n >> m;
  
  for (int i = 1; i <= n; ++i) {
    cin >> num[i];
  }

  for (int i = 0; i < n - 1; ++i) {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  queue<pair<int, int>> q;
  q.push({1, num[1]});

  int ans = 0;

  while (!q.empty()) {
    int node = q.front().first, weight = q.front().second;
    q.pop();
    
    if (weight > m || visited[node]) {
      continue;
    }
    
    visited[node] = 1;

    if (adj[node].size() == 1 && node != 1) {
      ++ans;
    }
    
    for (auto u : adj[node]) {
      if (num[u] == 0) {
        q.push({u, 0});
      } else {
        q.push({u, weight + num[u]});
      }
      }
  }

  cout << ans << "\n";

  return 0;
}
