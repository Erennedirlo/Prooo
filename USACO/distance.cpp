#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  
  int n;
  cin >> n;

  vector<int> x(n), y(n);

  for (int i = 0; i < n; ++i) {
    cin >> x[i];
  }

  for (int i = 0; i < n; ++i) {
    cin >> y[i];
  }

  int maxi = INT_MIN;

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (((x[i] - x[j]) * (x[i] - x[j])) + ((y[i] - y[j]) * (y[i] - y[j])) > maxi) {
        maxi = ((x[i] - x[j]) * (x[i] - x[j])) + ((y[i] - y[j]) * (y[i] - y[j]));
      }
    }
  }

  cout << maxi << "\n";

  return 0;
}
