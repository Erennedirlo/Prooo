// Written by: Erennedirlo, 17/10/2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    char lid[n + 1];
    cin >> lid;

    vector<int> v(n);

    for (int i = 0; i < n; ++i) {
      cin >> v[i];
    }
    
    int saved = 0;

    for (int i = 1; i < n; ++i) {
      if (lid[i] && lid[i - 1] == '0') {
        if (v[i] <= v[i - 1]) {
          lid[i - 1] = '1';
          lid[i] = '0';
        }
      }
    }

    for (int i = 0; i < n; ++i) {
      if (lid[i] == '1') {
        saved += v[i];
      }
    }

    cout << saved << "\n";

  }

  return 0;
}
