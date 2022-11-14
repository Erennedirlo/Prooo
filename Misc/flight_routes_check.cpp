// Written by: Erennedirlo
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a, x, n) for (int a = x; a < n; ++a)
vector<vector<int>> adj, rev;
vector<bool> vis, revis;

void dfs(int node, bool r) {
  if (r == false) {
    if (vis[node]) return;
    vis[node] = true;

    for (auto u : adj[node]) {
      dfs(u, r);
    }
  } else {
    if (revis[node]) return;
    revis[node] = true;

    for (auto u : rev[node]) {
      dfs(u, r);
    }
  }
}

int main() {
  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);
  
  int n, m;
  cin >> n >> m;
  adj.resize(n + 1);
  rev.resize(n + 1);
  vis.resize(n + 1);
  revis.resize(n + 1);
  
  loop(i, 0, m) {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    rev[b].push_back(a);
  }

  dfs(1, false);
  dfs(1, true);

  bool ans = 1;
  pair<int, int> such;

  loop (i, 2, n + 1) {
    if (vis[i] == 0) {
      ans = 0;
      such = {1, i};
      break;
    } else if (revis[i] == 0) {
      ans = 0;
      such = {i, 1};
      break;
    }
  }

  if (ans) cout << "YES";
  else cout << "NO" << "\n" << such.first << " " << such.second << "\n";
  
  return 0;
}

