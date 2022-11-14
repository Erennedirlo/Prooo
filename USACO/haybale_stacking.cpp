// Written by: Erennedirlo, 07/11/2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a, x, n) for (int a = x; a < n; ++a)

int main() {
  freopen("stacking.in", "r", stdin);
  freopen("stacking.out", "w", stdout);
  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);

  int n, k;
  cin >> n >> k;

  vector<int> st(n + 1);

  while (k--) {
    int l, r;
    cin >> l >> r;
    st[l]++;
    st[r + 1]--;
  }

  loop(i, 1, n) st[i] += st[i - 1];

  sort(st.begin(), st.end());

  cout << st[n / 2 + 1] << "\n";

  return 0;
}
