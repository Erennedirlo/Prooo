// Written by: Erennedirlo
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a, x, n) for (int a = x; a < n; ++a)
#define fastio cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);

int main() {
  fastio

  int n;
  cin >> n;
  vector<ll> v(n);
  
  bool isn = 1;
  loop(i, 0, n) {
    cin >> v[i];
    isn = !((v[i] > -1) | (isn != 1));
  }

  ll maxi = v[0];

  ll sum = 0;

  loop(i, 0, n) {
    if (sum + v[i] > 0) {
      sum += v[i];
    } else {
      sum = 0;
    }

    maxi = max(maxi, sum);
  }

  if (isn && maxi >= 0) {
    maxi = LONG_LONG_MIN;
    loop(i, 0, n) maxi = max(maxi, v[i]);
  }

  cout << maxi << "\n";

  return 0;
}
