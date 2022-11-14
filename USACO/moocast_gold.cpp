// Written by: Erennedirlo
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a, x, n) for (int a = x; a < n; ++a)
int n, reached;
vector<pair<int, int>> loc;
vector<bool> vis;

void dfs(int range, int node) {
  if (vis[node]) return;
  vis[node] = 1;
  ++reached;

  loop(i, 0, n) {
    int distx = loc[i].first - loc[node].first, disty = loc[i].second - loc[node].second;

    if (range >= distx * distx + disty * disty) dfs(range, i);
  }
}

int main() {
  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);
  freopen("moocast.in", "r", stdin);
  freopen("moocast.out", "w", stdout);

  cin >> n;
  loc.resize(n);
  vis.resize(n);

  loop(i, 0, n) cin >> loc[i].first >> loc[i].second;

  int r = 25000 * 25000, l = 0;
  
  int ans = INT_MAX;

  while (1) {
    int mid = (r + l) / 2;
    
    fill(vis.begin(), vis.end(), false);
    dfs(mid, 0);

    if (reached < n) {
      l = mid + 1;
    }

    else {
      reached = 0;
      fill(vis.begin(), vis.end(), false);
      dfs(mid - 1, 0);

      if (reached < n) {
        ans = mid;
        break;
      }
      else {
        r = mid - 1;
      }
    }

    reached  = 0;
  }

  cout << ans << "\n";

  return 0;
}

