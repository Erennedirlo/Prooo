// Written by: Erennedirlo, 10/10/2022
#include <bits/stdc++.h>
using namespace std;

int gcda (int a, int b) {
  if (a < b) {
    return gcda(b, a);
  }

  if (a % b == 0) {
    return b;
  }
  
  return gcda(a % b, b);
}

int main() {
  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);

  int t;

  for(cin >> t; t; t--) {
    int n;
    cin >> n;

    vector<int> v(n);
    
    for (int i = 0; i < n; ++i) {
      cin >> v[i];
    }
    
    vector<int> b(n + 1, 1);

    for (int i = 0; i < n; ++i) {
      if (b[i] % v[i]) {
        b[i] *= v[i];
      }
      if (b[i + 1] % v[i]) {
        b[i + 1] *= v[i];
      }
    }
    
    int ans = 1;
    for (int i = 0; i < n; ++i) {
      if (gcda(b[i], b[i + 1]) != v[i]) {
        ans = 0;
        break;
      }
    }

    if (ans) cout << "YES"<< "\n";
    else cout << "NO" << "\n";
  }
  
  return 0;
}
