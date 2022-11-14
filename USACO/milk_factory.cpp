#include<bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  
  vector<int> adj[n + 1];

  for (int i = 0; i < n - 1; ++i) {
    int a, b;
    cin >> a >> b;

    adj[b].push_back(a);
  }

  int distance[n + 1][n + 1], processed[n + 1][n + 1];

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= n; ++j) {
      processed[i][j] = 0;
      distance[i][j] = INT_MAX;
    }
  }

  for (int i = 1; i <= n; ++i) {
    queue<int> q;
    q.push(i);

    while (!q.empty()) {
      int node = q.front();
      q.pop();

      for (int u: adj[node]) {
        distance[i][u] = 1;
        if (processed[i][u] == 0) {
          q.push(u);
        }
      }

      processed[i][node] = 1;
    }
  }

  vector<int> ans;
  for (int i = 1; i <= n; ++i) {
    int ctrl = 1;
    for (int j = 1; j <= n; ++j) {
      if (distance[j][i] != 1) {
        ctrl = 0;
        break;
      }
    }

    if (ctrl) {
      ans.push_back(i);
    }
  }

  for (int a: ans) {
    cout << a << " ";
  }

  return 0;
}
