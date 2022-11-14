// Written by: Erennedirlo, 07/11/2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a, x, n) for (int a = x; a < n; ++a)

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  freopen("div7.in", "r", stdin);
  freopen("div7.out", "w", stdout);

  int n;
  cin >> n;
  vector<int> v(n + 1);

  loop(i, 1, n + 1) {
    cin >> v[i];
    v[i] = (v[i - 1] + v[i]) % 7;
  }
  
  vector<int> first(8), last(8);

  for (int i = 1; i <= n; ++i) {
    last[v[i]] = i;
  }
  for (int i = n; i > 0; --i) {
    first[v[i]] = i;
  }
  
  int maxi = INT_MIN;
  for (int i = 1; i < 8; ++i)
    maxi = max(maxi, last[i] - first[i]);

  cout << maxi << "\n";
  return 0;
}
