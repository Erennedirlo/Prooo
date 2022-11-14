// Written by: Erennedirlo
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a, x, n) for (int a = x; a < n; ++a)

vector<pair<int, int>> loc;
vector<int> range, num;
int n;

void dfs(int from, int node, vector<bool> &vis) {
  if (vis[node])
    return;
  vis[node] = 1;

  num[from]++;

  loop(i, 1, n + 1) {
    if (i == node || i == from)
      continue;
    
    int distx = loc[i].first - loc[node].first, disty = loc[i].second - loc[node].second;

    if (range[node] * range[node] >=
        distx * distx + disty * disty)
      dfs(from, i, vis);
  }
}

int main() {
  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);
  freopen("moocast.in", "r", stdin);
  freopen("moocast.out", "w", stdout);

  cin >> n;

  loc.resize(n + 1);
  range.resize(n + 1);
  num.resize(n + 1);

  loop(i, 1, n + 1) {
    int x, y, r;
    cin >> x >> y >> r;
    range[i] = r;
    loc[i] = {x, y};
  }

  loop(i, 1, n + 1) {
    vector<bool> vis(n + 1);
    dfs(i, i, vis);
  }

  int maxi = INT_MIN;
  loop(i, 1, n + 1) maxi = max(maxi, num[i]);

  cout << maxi << "\n";

  return 0;
}
