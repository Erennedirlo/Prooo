// Written by: Erennedirlo, 27/10/2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a, x, n) for (int a = x; a < n; ++a)
#define int long long
#define mod 1000000007

int32_t main() {
  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);

  int c, n;
  cin >> c >> n;
  vector<int> coins(c), dp(n + 1);
  loop(i, 0, c) cin >> coins[i];
  
  dp[0] = 1;
  loop(i, 0, n + 1) {
    if (!dp[i]) continue;
    for (auto x : coins) {
      if (i + x <= n) {
        dp[i + x] += dp[i] % mod;
      }
    }
  }

  cout << dp[n] % mod << "\n";

  return 0;
}
