#include <bits/stdc++.h>
#include <climits>
using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  
  ll n, c;
  cin >> c >> n;
  vector<ll> coins(c);

  for (ll i = 0; i < c; ++i) {
    cin >> coins[i];
  }
  
  vector<ll> dp(n + 1, LONG_LONG_MAX);
  dp[0] = 0;

  for (ll i = 0; i <= n; ++i) {
    if (dp[i] == LONG_LONG_MAX) continue;

    for (auto x : coins) {
      if (i + x <= n) {
        dp[i + x] = min(dp[i + x], dp[i] + 1);
      }
    }
  }
  
  cout << (dp[n] == LONG_LONG_MAX ? -1 : dp[n]) << "\n";
  return 0;
}
