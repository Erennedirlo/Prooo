// Written by: Erennedirlo, 05/10/2022
#include <bits/stdc++.h>
using namespace std;

int main() {
  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);

  int t;

  for (cin >> t; t; --t) {
    long long p, a, b, c;
    cin >> p >> a >> b >> c;

    long long ans =
        min((((p - 1) / a + 1) * a) - p,
            min((((p - 1) / b + 1) * b) - p, (((p - 1) / c + 1) * c) - p));
    cout << ans << "\n";
  }

  return 0;
}
