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

    int diff = n / 2;
    vector<int> v(n + 1);

    v[1] = diff + 1;
    
    if (n % 2 == 0) {
      for (int i = 2; i <= n; ++i) {
        if (i % 2 == 0) {
          v[i] = v[i - 1] - diff;
        }
        else {
          v[i] = v[i - 1] + diff + 1;
        }
      }
    } else {
      for (int i = 2; i < n; ++i) {
        if (i % 2 == 0) {
          v[i] = v[i - 1] - diff;
        } else {
          v[i] = v[i - 1] + diff + 1;
        }
      }
      v[n] = n;
    }

    

    for (int i = 1; i <= n; ++i) {
      cout << v[i] << " ";
    }
    cout << "\n";
  }

  return 0;
}
