// Written by: Erennedirlo
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a, x, n) for (int a = x; a < n; ++a)

int main() {
  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);

  int n, q;
  cin >> n >> q;
  vector<vector<int>> grid(n + 1, vector<int>(n + 1)),
      sum(n + 1, vector<int>(n + 1));

  loop(i, 1, n + 1) loop(j, 1, n + 1) {
    char c;
    cin >> c;
    grid[i][j] = (c == '*');

    sum[i][j] = sum[i][j - 1] + sum[i - 1][j] - sum[i - 1][j - 1] + grid[i][j];
  }

  while (q--) {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << sum[x2][y2] - sum[x2][y1 - 1] - sum[x1 - 1][y2] +
                sum[x1 - 1][y1 - 1]
         << "\n";
  }
  return 0;
}
