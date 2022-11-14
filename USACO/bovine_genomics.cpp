#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, j, k) for (int i = j; i < k; ++i)

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  freopen("cownomics.in", "r", stdin);
  freopen("cownomics.out", "w", stdout);

  int n, m;
  cin >> n >> m;

  string spotty[n], plain[n];
  loop(i, 0, n) cin >> spotty[i];
  loop(i, 0, n) cin >> plain[i];

  int ctr = 0;

  loop(i, 0, m) {
    unordered_map<char, int> check;

    loop(k, 0, n) check[spotty[k][i]] = 1;

    int ans = 1;
    loop(k, 0, n) {
      if (check[plain[k][i]]) {
        ans = 0;
        break;
      }
    }

    ctr += ans;
  }

  cout << ctr << "\n";

  return 0;
}
