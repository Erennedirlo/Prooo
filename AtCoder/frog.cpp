#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int n;
  cin >> n;
  int s[n], dp[n];

  for (int i = 0; i < n; ++i) {
    cin >> s[i];
    dp[i] = INT_MAX;
  }
  
  dp[0] = 0;

  for (int i = 1; i < n; ++i) {
    dp[i] = dp[i - 1] + abs(s[i - 1] - s[i]);
    if (i > 1) {
      dp[i] = min(dp[i], dp[i - 2] + abs(s[i - 2] - s[i]));
    }
  }
  
  cout << dp[n - 1] << "\n";

  return 0;
}
