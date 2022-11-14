// Written by: Erennedirlo, 06/10/2022
#include <bits/stdc++.h>
using namespace std;

int main() {
  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);
  
  int t;

  for (cin >> t; t; --t) {
    int n;
    cin >> n;

    int even = 0, odd = 0;

    for (int i = 0; i < n; ++i) {
      int tmp;
      cin >> tmp;
      (tmp % 2) ? (++odd) : (++even);
    }
  
    int ans1, ans2;

    if ((odd + 1) / 2 % 2) {
      ans1 = 2;
    } else {
      ans1 = 1;
    }

    if( ((n + 1) / 2 - ((even + 1) / 2)) % 2) {
      ans2 = 2;
    } else {
      ans2 = 1;
    }

    if (ans1 == 1 || ans2 == 1) {
      cout << "Alice" << "\n";
    } else {
      cout << "Bob" << "\n";
    }
  }

  return 0;
}
