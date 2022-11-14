// Written by: Erennedirlo, 04/10/2022
#include <bits/stdc++.h>
using namespace std;

int main() {
  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);

  int t;

  for (cin >> t; t; --t) {
    int n, m;
    cin >> n >> m;

    vector<int> occurences(n + 1);
    multiset<pair<int, int>> proficient;

    for (int i = 0; i < m; ++i) {
      int tmp;
      cin >> tmp;
      occurences[tmp]++;
    }

    for (int i = 1; i <= n; ++i) {
      proficient.insert({occurences[i], i});
    }

    auto lastIte = proficient.end(), firstIte = proficient.begin();
    lastIte--;

    while (lastIte->first - firstIte->first > 2) {
      proficient.insert({lastIte->first - 1, lastIte->second});
      proficient.insert({firstIte->first + 2, firstIte->second});

      proficient.erase(proficient.find({lastIte->first, lastIte->second}));
      proficient.erase(proficient.find({firstIte->first, firstIte->second}));

      lastIte = proficient.end();
      lastIte--;
      firstIte = proficient.begin();
    }

    cout << lastIte->first << "\n";
  }

  return 0;
}
