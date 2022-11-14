#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  long long n, q;
  cin >> n >> q;
  vector<long long> v(n);
  cin >> v[0];

  for (long long i = 1; i < n; ++i) {
    long long a;
    cin >> a;
    v[i] = v[i - 1] + a;
  }

  while (q--) {
    int l, r;
    cin >> l >> r;
    cout << v[r - 1] - (l > 0 ? v[l - 1] : 0) << "\n";
  }
  
  return 0;
}
