// Written by: Erennedirlo
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a, x, n) for (int a = x; a < n; ++a)

vector<vector<int>> adj;
vector<bool> visited;

void dfs(int node) {
  if (visited[node])
    return;
  
  visited[node] = true;
  for (auto u : adj[node]) {
    dfs(u);
  } 
}

int main() {
  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);
  
  int n, m;  
  cin >> n >> m;
  
  adj.resize(n + 1);
  visited.resize(n + 1);

  loop(i, 0, m) {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  int parts = 0;
  vector<pair<int, int>> write;

  loop(i, 1, n + 1) {
    if (!visited[i]) {
      if (i != 1) write.push_back({i - 1, i});
      dfs(i);
      ++parts;
    }
  }

  cout << parts - 1 << "\n";

  for (auto u : write) cout << u.first << " " << u.second << "\n";

  return 0;
}

