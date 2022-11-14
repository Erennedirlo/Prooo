// Written by: Erennedirlo
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a, x, n) for (int a = x; a < n; ++a)

int main() {
  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);

  freopen("paintbarn.in", "r", stdin);
  freopen("paintbarn.out", "w", stdout);

  int n, k;
  cin >> n >> k;

  vector<vector<int>> grid(1001, vector<int>(1001));

  while (n--) {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    x1++;
    y1++;
    x2++;
    y2++;
    grid[x1][y1]++;
    grid[x2][y1]--;
    grid[x1][y2]--;
    grid[x2][y2]++;
  }

  loop(i, 1, 1001) {
    loop(j, 1, 1001) {
      grid[i][j] += grid[i][j - 1] + grid[i - 1][j] - grid[i - 1][j - 1];
    }
  }
  
  int ans = 0;

  loop(i, 1, 1001) {
    loop(j, 1, 1001) {
      if (grid[i][j] == k) ++ans;
    }
  }
  
  cout << ans << "\n";

  return 0;
}
