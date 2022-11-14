// Written by: Erennedirlo, 29/09/2022
#include <bits/stdc++.h>
using namespace std;

int main() {
  {cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);}
  
  int n, t;
  cin >> n >> t;
  pair<int, int> min;
  min.first = INT_MAX;

  for (int i = 0; i < n; ++i) {
    int s, d;
    cin >> s >> d;
    if (s >= t) {
      if (s <= min.first) {
        min.first = s;
        min.second = i + 1;
      }
      continue;
    }

    // 1 + 99999 + 1 - 0
    int first = s + (t - s) + d - (((t - s) % d) ? (t - s) % d : d);
    // cout << "first: " << first << " i: " << i << "\n";

    if (first < min.first) {
      min.first = first;
      min.second = i + 1;
    }
  }

  cout << min.second << "\n";

  return 0;
}
