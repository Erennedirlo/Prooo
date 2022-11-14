// Written by: Erennedirlo, 07/11/2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a, x, n) for (int a = x; a < n; ++a)

int main() {
  int n, q, t;
  cin >> n >> q >> t;

  vector<int> minseg(2 * n + 1);
  loop(i, n, 2 * n) cin >> minseg[i];

  for (int i = n - 1; i > 0; --i)
    minseg[i] = min(minseg[2 * i], minseg[2 * i + 1]);

  // making changes
  while (t--) {
    int a, b;
    cin >> a >> b;

    a += n - 1;
    minseg[a] = b;
    
    a /= 2;

    while (a > 0) {
      minseg[a] = min(minseg[2 * a], minseg[2 * a + 1]);
      a /= 2;
    }
  }

  // making queries
  while (q--) {
    int mini = INT_MAX, a, b;
    cin >> a >> b;
    a += n - 1;
    b += n - 1;

    while (a <= b) {
      mini = min(mini, (a % 2 ? minseg[a++] : INT_MAX));
      a /= 2;
      mini = min(mini, (b % 2 ? INT_MAX : minseg[b--]));
      b /= 2;
    }

    cout << mini << "\n";
  }

  return 0;
}
