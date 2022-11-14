// Written by: Erennedirlo, 31/10/2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a, x, n) for (int a = x; a < n; ++a)

int main() {
  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);
  freopen("blocks.in", "r", stdin);
  freopen("blocks.out", "w", stdout);

  int n;
  cin >> n;

  unordered_map<char, int> let[n][2];

  for (int i = 0; i < n; ++i) {
    string a, b;
    cin >> a >> b;
    loop(j, 0, (int)a.size()) let[i][0][a[j]]++;
    loop(j, 0, (int)b.size()) let[i][1][b[j]]++;
  }

  for (char c = 'a'; c <= 'z'; ++c) {
    int sum = 0;

    loop(i, 0, n) sum += max(let[i][0][c], let[i][1][c]);

    cout << sum << "\n";
  }

  return 0;
}
