// Written by: Erennedirlo, 29/09/2022
#include <bits/stdc++.h>
using namespace std;

int main() {
  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);

  int a, b, c;
  cin >> a >> b >> c;

  if ((a < b && c < 0) || (a > b && c > 0)) {
    cout << "NO"
         << "\n";
  } else {
    if (c == 0) {
      if (a != b)
        cout << "NO"
             << "\n";
      else
        cout << "YES"
             << "\n";
    } else if ((b - a) % c == 0) {
      cout << "YES"
           << "\n";
    } else {
      cout << "NO"
           << "\n";
    }
  }

  return 0;
}
