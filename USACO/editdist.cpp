#include <bits/stdc++.h>
using namespace std;
string a, b;

unordered_map<int, unordered_map<int, int>> dp;

int edit(int fir, int sec) {
  if (fir < 0 || sec < 0) {
    return 0;
  }
  if (dp[fir][sec] != 0) {
    return dp[fir][sec];
  }
  return dp[fir][sec] =
             min(edit(fir - 1, sec) + 1,
                 min(edit(fir, sec - 1) + 1,
                     edit(fir - 1, sec - 1) + !(a[fir] == b[fir])));
}

int main() {
  cin >> a >> b;

  cout << edit(a.length(), b.length()) << "\n";

  return 0;
}
