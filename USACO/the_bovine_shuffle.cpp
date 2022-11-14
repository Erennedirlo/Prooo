// Written by: Erennedirlo, 31/10/2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a, x, n) for (int a = x; a < n; ++a)

int find(vector<int> &a, int x) {
  loop(i, 1, a.size() + 1) {
    if (a[i] == x) {
      return i;
    }
  }
  return -1;
}

int main() {
  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);
  freopen("shuffle.in", "r", stdin);
  freopen("shuffle.out", "w", stdout);

  int n;
  cin >> n;
  
  string id[n + 1];
  vector<int> a(n + 1), o(n + 1), tmp(n + 1);

  loop(i, 1, n + 1) cin >> a[i];
  loop(i, 1, n + 1) cin >> id[i];

  loop(i, 1, n + 1) o[i] = find(a, i);
  loop(i, 1, n + 1) {
    tmp[i] = o[o[o[i]]];
  }
  
  loop(i, 1, n + 1) cout << id[find(tmp, i)] << "\n";
  
  return 0;
}
