// Written by: Erennedirlo, 17/10/2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int t, n, m;

int main() {
  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);

  cin >> t;

  for (int i = 0; i < t; ++i) {
    cin >> n;
    for (int j = 0; j < n; ++j) {
      int tmp;
      cin >> tmp;
    }
    cout << 6 * (10 - n) * (10 - n - 1) / 2 << "\n";
  }

  return 0;
}
