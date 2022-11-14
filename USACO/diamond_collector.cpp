// Written by: Erennedirlo, 31/10/2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a, x, n) for (int a = x; a < n; ++a)

int main() {
  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);
  freopen("diamond.in", "r", stdin);
  freopen("diamond.out", "w", stdout);

  int n, k;
  cin >> n >> k;
  vector<int> sizes(n);

  loop(i, 0, n) cin >> sizes[i];
  
  sort(sizes.begin(), sizes.end());
  int maxi = 0;

  loop(i, 0, n) {
    int ctr = 1;

    loop(j, i + 1, n) {
      if (abs(sizes[i] - sizes[j]) <= k) ++ctr;
    }

    maxi = max(maxi, ctr);
  }

  cout << maxi << "\n";

  return 0;
}
