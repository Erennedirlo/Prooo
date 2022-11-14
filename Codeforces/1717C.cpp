// Written by: Erennedirlo, 22/09/2022
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n), b(n);

  for (int i = 0; i < 2 * n; ++i) {
    if (i < n) {
      cin >> a[i];
    } else {
      cin >> b[i - n];
    }
  }

  int ans = 1;

  for (int i = 0; i < n; ++i) {
    if (a[i] == b[i]) {
      continue;
    } else if (a[i] > b[i]) {
      ans = 0;
      break;
    } else {
      if (!((i != n - 1 && b[i] <= b[i + 1] + 1) ||
            (i == n - 1 && b[i] <= b[0] + 1))) {
        ans = 0;
        break;
      }
    }
  }

  if (ans) {
    cout << "YES"
         << "\n";
  } else {
    cout << "NO"
         << "\n";
  }
}

int main() {
  cout.tie(0);
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}
