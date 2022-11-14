// Written by: Erennedirlo, 23/10/2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);

  int t;

  for (cin >> t; t; t--) {
    int n;
    cin >> n;
    vector<char> v(n);

    int curq = 0;
    
    for (int i = 0; i < n; ++i) {
      cin >> v[i];
      if (v[i] == 'Q') {
        ++curq;
      } else if (curq != 0) {
        --curq;
      }
    }

    if (curq > 0) {
      cout << "No" << "\n";
    } else {
      cout << "Yes" << "\n";
    }
  }

  return 0;
}
