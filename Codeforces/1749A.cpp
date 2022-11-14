#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;

  for (cin >> t; t; t--) {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
      int tmp;
      cin >> tmp;
      cin >> tmp;
    }

    if (m < n) {
      cout << "YES" << "\n";
    } else {
      cout << "NO" << "\n";
    }
  }

  return 0;
}
