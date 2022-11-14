// Written by: Erennedirlo, 05/10/2022
#include <bits/stdc++.h>
using namespace std;

int main() {
  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);

  int t;

  for (cin >> t; t; --t) {
    int n;
    string s;
    cin >> n >> s;

    if (s[0] != '9') {
      for (int i = 0; i < n; ++i) {
        cout << '9' - s[i];
      }
      cout << "\n";
    }

    else {
      char ans[n + 1];

      for (int i = 0; i < n; ++i) {
        ans[i] = '9' - s[i] + '0';
      }

      int elde;
      if (ans[n - 1] < '8') {
        ans[n - 1] += 2;
        elde = 0;
      } else {
        elde = 1;
        ans[n - 1] = ((ans[n - 1] - '0' + 2) % 10) + '0';
      }

      for (int i = n - 2; i >= 0; --i) {
        ans[i] += elde + 1;
        elde = 0;
        if (ans[i] > '9') {
          elde = (ans[i] - '0') / 10;
          ans[i] = (ans[i] - '0') % 10 + '0';
        }
      }
      
      for (int i = 0; i < n; ++i) {
        cout << ans[i];
      }
      cout << "\n";
    }
  }

  return 0;
}
