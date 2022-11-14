// Written by: Erennedirlo, 28/09/2022
#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
  int n, c, q;
  char s[200005];
  cin >> n >> c >> q >> s;

  vector<pair<int, int>> created(c + 1), queries(c + 1);

  created[0] = {0, n};

  for (int i = 1; i <= c; ++i) {
    long long l, r;
    cin >> l >> r;

    queries[i] = {l, r};
    created[i] = {created[i - 1].second + 1, created[i - 1].second + 1 + r - l};
  }

  for (int i = 0; i < q; ++i) {
    int k;
    cin >> k;
    while (k > n) {
      int finded = 0;

      for (int l = 0, r = c; l <= r;) {
        int mid = l + (r - l) / 2;
        if (created[mid].first <= k && created[mid].second >= k) {
          finded = mid;
          break;
        } else if (created[mid].first > k) {
          r = mid - 1;
        } else {
          l = mid + 1;
        }
      }

      k = queries[finded].first + k - created[finded].first;
    }

    cout << s[k - 1] << "\n";
  }
}

int32_t main() {
  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}
