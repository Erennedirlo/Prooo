#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;

  vector<pair<int, int>> seg(n), bes(m);
  
  int a, b;
  cin >> a >> b;
  seg[0] = {a, b};
  for (int i = 1; i < n; ++i) {
    cin >> a >> b;
    seg[i] = {a + seg[i - 1].first, b};
  }
  
  cin >> a >> b;
  bes[0] = {a, b};
  for (int i = 1; i < m; ++i) {
    cin >> a >> b;
    bes[i] = {a + bes[i - 1].first, b};
  }

  int maxi = INT_MIN;

  for (int i = 0, partseg = 0, partbes = 0; i < 100; ++i) {
    while (seg[partseg].first < i) partseg++;
    while (bes[partbes].first < i) partbes++;
    
    maxi = max(maxi, bes[partbes].second - seg[partseg].second);  
  }

  cout << maxi << "\n";

  return 0;
}
