#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;

void dfs(int a) {
  if (visited[a]) return;
  visited[a] = true;
  for (auto u : adj[a]) dfs(u);
}

int main() {
  int n, m;
  cin >> n >> m;

  adj.resize(n + 1);
  visited.resize(n + 1);

  for (int i = 0; i < m; ++i) {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  
  dfs(1);
  int parts = 1;
  vector<pair<int,int>> roads_to_build;

  for (int i = 2; i <= n; ++i) {
    if (visited[i] == 0) {
      roads_to_build.push_back({i - 1, i});
      dfs(i);
      ++parts;
    }
  }

  cout << parts - 1 << "\n";
  
  for(pair<int, int> a: roads_to_build) {
    cout << a.first << " " << a.second << "\n";
  }

  return 0;
}
