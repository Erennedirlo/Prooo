// Written by: Erennedirlo
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a, x, n) for (int a = x; a < n; ++a)

vector<pair<int, int>> loc;
vector<vector<int>> adj;
vector<int> visited;

void dfs(int node, int mark) {
  if (visited[node])
    return;
  visited[node] = mark;

  for (auto u : adj[node]) {
    dfs(u, mark);
  }
}

int main() {
  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);
  freopen("fenceplan.in", "r", stdin);
  freopen("fenceplan.out", "w", stdout);

  int n, m;
  cin >> n >> m;

  loc.resize(n + 1);
  adj.resize(n + 1);
  visited.resize(n + 1);

  loop(i, 1, n + 1) {
    int x, y;
    cin >> x >> y;
    loc[i] = {x, y};
  }

  loop(i, 0, m) {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  int parts = 0;
  int mark = 1;

  vector<pair<int, int>> mins(100005, {INT_MAX, INT_MAX}),
      maxes(100005, {INT_MIN, INT_MIN});
  
  loop(i, 1, n + 1) {
    if (!visited[i]) {
      dfs(i, mark++);
      ++parts;
    }
    int part = visited[i];
    
    mins[part].first = min(mins[part].first, loc[i].first);
    mins[part].second = min(mins[part].second, loc[i].second);
    maxes[part].first = max(maxes[part].first, loc[i].first);
    maxes[part].second = max(maxes[part].second, loc[i].second);
  }

  int minperim = INT_MAX;
  loop(i, 1, parts + 1) {
    minperim = min(minperim, 2 * ((maxes[i].first - mins[i].first) +
                               (maxes[i].second - mins[i].second)));
  }
  
  cout << minperim << "\n";

  return 0;
}
