#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod ((ll)1e9+7)

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int n;
  cin >> n;
  unordered_map<int, ll> dp;
  
  dp[0] = 1;

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= 6; ++j) {
      if (i >= j) dp[i] += dp[i - j] % mod;
    }
  }

  cout << dp[n] % mod << "\n";

  return 0;
}
