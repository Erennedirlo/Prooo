#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;

  unordered_map<int, int> right_guess;
  vector<int> shell{1, 2, 3};

  for (cin >> n; n; --n) {
    int a, b, g;
    cin >> a >> b >> g;

    swap(shell[a], shell[b]);
    right_guess[shell[g]]++;
  }

  cout << max(right_guess[1], max(right_guess[2], right_guess[3]));

  return 0;
}
