#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, j, k) for (int i = j; i < k; ++i)

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  freopen("circlecross.in", "r", stdin);
  freopen("circlecross.out", "w", stdout);

  string circle;
  cin >> circle;

  vector<pair<int, int>> v(26);

  loop(i, 0, 52) {
    if (v[circle[i] - 'A'].first == 0)
      v[circle[i] - 'A'].first = i + 1;
    else
      v[circle[i] - 'A'].second = i + 1;
  }

  int ctr = 0;

  loop(i, 0, 26) {
    loop(j, 0, 26) {
      if (i == j)
        continue;
      if (v[i].first < v[j].first && v[i].second > v[j].first &&
          v[i].second < v[j].second)
        ++ctr;
    }
  }

  cout << ctr << "\n";

  return 0;
}
