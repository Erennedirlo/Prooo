// Written by: Erennedirlo, 06/11/2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a, x, n) for (int a = x; a < n; ++a)

int p(int a) {
  int biggest = 0;
  for (int i = 0; (a % (int)pow(2, i) == 0) && i <= log2(a); ++i) {
    biggest = i;
  }
  return biggest;
}

int main() {
  int n, q;
  cin >> n >> q;

  vector<int> v(n + 1), fen(n + 1);
  loop(i, 1, n + 1) cin >> v[i];

  loop(i, 1, n + 1) {
    int a = p(i); // biggest power of i that divides a
    int sum = 0;

    for (int j = i; j > i - pow(2, a); --j) {
      sum += v[j];
    }

    fen[i] = sum;
  }

  while (q--) {
    int a, s = 0;
    cin >> a;
    while (a >= 1) {
      s += fen[a];
      a -= a & -a;
    }

    cout << s << "\n";
  }
  return 0;
}
