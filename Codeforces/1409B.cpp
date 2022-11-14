// Written by: Erennedirlo, 05/10/2022
#include <bits/stdc++.h>
using namespace std;

int main() {
  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);

  int t;

  for(cin >> t; t; --t) {
    long long a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;

    long long min1 = INT_MAX, min2 = INT_MAX;
    
    // Initialize min1
    long long aa = a, bb = b, nn = n;

    if (a - x >= nn) {
      aa -= nn;
    } else {
      nn -= aa - x;
      aa = x;
      bb = max(y, bb - nn);
    }

    min1 = aa * bb;

    // Initialize min2
    if (b - y >= n ) {
      b -= n;
    } else {
      n -= b - y;
      b = y;
      a = max(x, a - n);
    }

    min2 = a * b;

    cout << min(min1, min2) << "\n";
  }

  return 0;
}
