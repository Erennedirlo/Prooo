// Written by: Erennedirlo, 31/10/2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a, x, n) for (int a = x; a < n; ++a)

int main() {
  freopen("mixmilk.in", "r", stdin);
  freopen("mixmilk.out", "w", stdout);

  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);

  vector<int> cap(3), mil(3);
  loop(i, 0, 3) cin >> cap[i] >> mil[i];
  
  for (int i = 0; i < 4; ++i) {
    int from = i % 3, to = (i + 1) % 3;

    if (cap[to] < mil[from] + mil[to]) {
      int a = cap[to] - mil[to];
      mil[from] -= a;
      mil[to] = cap[to];
    } else {
      mil[to] += mil[from];
      mil[from] = 0;
    }
  }

  loop(i, 0, 3) cout << mil[i] << "\n";

  return 0;
}
