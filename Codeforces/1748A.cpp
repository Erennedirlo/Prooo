// Written by: Erennedirlo
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a, x, n) for (int a = x; a < n; ++a)
#define int long long

int32_t main() {
  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);
  
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    if (n %  2) {
      cout << (n + 1) / 2 << "\n";
    } else {
      cout << n / 2 << "\n";
    }
  }

  return 0;
}

