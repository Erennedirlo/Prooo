#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    vector<long long> v(n);
    vector<vector<pair<long long, long long>>> dp(
        n, vector<pair<long long, long long>>(2));

    for (int i = 0; i < n; ++i) {
      cin >> v[i];
    }

    for (int i = n - 2; i > 0; --i) {
      dp[i][1] = {dp[i + 1][0].first +
                      max(0LL, max(v[i + 1], v[i - 1]) + 1 - v[i]),
                  dp[i + 1][0].second + 1};

      if (dp[i + 1][1].second > dp[i + 1][0].second) {
        dp[i][0] = dp[i + 1][1];
      } else if (dp[i + 1][1].second < dp[i + 1][0].second) {
        dp[i][0] = dp[i + 1][0];
      } else {
        dp[i][0] = (dp[i + 1][0].first < dp[i + 1][1].first ? dp[i + 1][0]
                                                            : dp[i + 1][1]);
      }
    }

    if (dp[1][1].second > dp[1][0].second) {
      cout << dp[1][1].first << "\n";
    } else if (dp[1][1].second < dp[1][0].second) {
      cout << dp[1][0].first << "\n";
    } else {
      cout << (dp[1][1].first < dp[1][0].first ? dp[1][1].first
                                               : dp[1][0].first)
           << "\n";
    }
  }

  return 0;
}
