// Written by: Erennedirlo
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a, x, n) for (int a = x; a < n; ++a)

vector<int> ctr(10);
string s;

int maxEl() {
  int maxi = 0;
  for (auto u : ctr)
    maxi = max(maxi, u);
  return maxi;
}

int **dp;

void f(int l, int r, int distinct) {
  if (dp[l][r]) {
    dp[l][r] = -1;
    return;
  }

  if (l == r)
    return;

  int ret = 0;
  if (distinct >= maxEl()) {
    ret = 1;
  }

  if (ctr[s[l] - '0'] <= 1) {
    ctr[s[l] - '0']--;
    f(l + 1, r, distinct - 1);
    ret = max(ret, ret + dp[l + 1][r]);
    ctr[s[l] - '0']++;
  } else {
    ctr[s[l] - '0']--;
    f(l + 1, r, distinct);
    ret = max(ret, ret + dp[l + 1][r]);
    ctr[s[l] - '0']++;
  }

  if (ctr[s[r - 1] - '0'] <= 1) {
    ctr[s[r - 1] - '0']--;
    f(l, r - 1, distinct);
    ret = max(ret, ret + dp[l][r - 1]);
    ctr[s[r - 1] - '0']++;
  } else {
    ctr[s[r - 1] - '0']--;
    f(l, r - 1, distinct);
    ret = max(ret, ret + dp[l][r - 1]);
    ctr[s[r - 1] - '0']++;
  }

  dp[l][r] = ret;
}

int main() {
  cout.tie(0);
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n >> s;

    dp = (int **)calloc(sizeof(int *), (n + 1));
    loop(i, 0, n + 1) { dp[i] = (int *)calloc(sizeof(int), (n + 1)); }

    loop(i, 0, 10) ctr[i] = 0;
    int dist = 0;

    loop(i, 0, n) {
      if (ctr[s[i] - '0'] == 0)
        ++dist;
      ++ctr[s[i] - '0'];
    }

    f(0, n, dist);
    cout << dp[0][n] << "\n";
    fill(ctr.begin(), ctr.end(), 0);
    s.clear();
  }

  return 0;
}
