#include <bits/stdc++.h>
using namespace std;
int main() {

  int n;
  cin >> n;

  vector<int> degree(n);

  for(int i = 0; i < n - 1; ++i) {
    int a, b;
    cin >> a >> b;
    degree[a - 1]++; degree[b - 1]++;
  }

  int ans = degree[0] + 1;
  for (int i = 1; i < n; ++i) {
    if (degree[i] + 1 > ans) {
      ans = degree[i] + 1;
    }
  }

  cout << ans << "\n";

  return 0;
}
