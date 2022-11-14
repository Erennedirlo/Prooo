// Written by: Erennedirlo, 07/11/2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a, x, n) for (int a = x; a < n; ++a)

int main() {
  int n, q, t;
  cin >> n >> q >> t;

  vector<int> v(n), seg(2 * n + 1);
  loop(i, 0, n) {
    cin >> v[i];
    seg[i + n] = v[i];
  }

  for (int i = n - 1; i > 0; --i) {
    seg[i] += seg[2 * i] + seg[2 * i + 1];
  }

  cout << "Which element to update? ";

  while (t--) {
    int a, b;
    cin >> a >> b;
    a += n - 1;

    while (a >= 1) {
      seg[a] += b;
      a /= 2;
    }
  }

  cout << "Enter A and B: ";

  while (q--) {
    int a, b;
    cin >> a >> b;
    
    a += n - 1;
    b += n - 1;
    int sum = 0;

    while (a <= b) {
      sum += (a % 2 ? seg[a++] : 0);
      sum += (b % 2 ? 0 : seg[b--]);
      a /= 2;
      b /= 2;
    }

    cout << sum << "\n";
  }

  return 0;
}
