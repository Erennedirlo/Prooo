// Written by: Erennedirlo, 06/11/2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a, x, n) for (int a = x; a < n; ++a)

int main() {
  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);

  int n, q;
  cin >> n >> q;

  vector<int> v(n);
  loop(i, 0, n) cin >> v[i];

  map<pair<int, int>, int> mp;

  for (int t = 0; t <= log2(n); ++t) {
    int i = pow(2, t);

    loop (j, 0, n - i + 1) {
      int mini = INT_MAX;

      loop (k, j, j + i) {
        mini = min(mini, v[k]);
      }

      mp[{j, j + i - 1}] = mini;
    }
  }

  while(q--) {
    int a, b;
    cin >> a >> b;

    int tmp = 0;
    
    for (int i = 31; i > 0; --i) {
      if (((b - a + 1) >> i) & 1) {
        tmp = pow(2, i);
        break;
      }
    }

    cout << min(mp[{a, a + tmp - 1}], mp[{b - tmp + 1, b}]) << "\n";
  }

  return 0;
}
