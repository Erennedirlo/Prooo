// Written by: Erennedirlo, 29/10/2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a, x, n) for (int a = x; a < n; ++a)
#define int long long

int32_t main() {
  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);

  int t;

  for (cin >> t; t; --t) {
    int n;
    cin >> n;
    vector<pair<int, int>> v1(n);
    loop(i, 0, n) {
      int a, b;
      cin >> a >> b;
      v1[i].first = a;
      v1[i].second = b;
    }
    
    int maxi = INT_MIN, h = 0, w = 0;
    for (int i = 0; i < n; ++i) {
      maxi = max(maxi, max(v1[i].first, v1[i].second));
    }

    h = maxi;

    for (int i = 0; i < n; ++i) {
      w += min(v1[i].first, v1[i].second);
    }

    cout << h + h + w + w << "\n";
  }

  return 0;
}
