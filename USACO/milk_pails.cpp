// Written by: Erennedirlo, 31/10/2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a, x, n) for (int a = x; a < n; ++a)

int x, y, m;
unordered_map<int, int> dp;

int bf(int c) {
  if (c > m) return 0;
  if (dp[c]) return dp[c];
  return dp[c] = max(bf(c + x), max(bf(c + y), c));
}

int main() {
  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);
  freopen("pails.in", "r", stdin);
  freopen("pails.out", "w", stdout);

  cin >> x >> y >> m;
  cout << bf(0) << "\n";

  return 0;
}
