// Written by: Erennedirlo, 03/10/2022
#include <bits/stdc++.h>
using namespace std;

pair<int, int> maxOf(vector<int> &v) {
  int max = INT_MIN, ind = -1;
  for (int i = 0; i < v.size(); ++i) {
    if (v[i] > max) {
      ind = i;
      max = v[i];
    }
  }
  return {max, ind};
}

pair<int, int> minOf(vector<int> &v) {
  int min = INT_MAX, ind = -1;
  for (int i = 0; i < v.size(); ++i) {
    if (v[i] < min) {
      ind = i;
      min = v[i];
    }
  }
  return {min, ind};
}

int main() {
  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);

  int t;
  cin >> t;

  while (t--) {
    int n, m;
    cin >> n >> m;
    
    vector<int> tasks(m), proficient(n);
    
    for (int i = 0; i < m; ++i) {
      cin >> tasks[i];
      --tasks[i];
    }
    
    for (int i = 0; i < m; ++i) {
      ++proficient[tasks[i]];
    }
    
    pair<int, int> maxi = maxOf(proficient), mini = minOf(proficient);

    while (maxi.first - mini.first > 2) {
      proficient[mini.second] += 2;
      proficient[maxi.second] -= 1;

      maxi = maxOf(proficient), mini = minOf(proficient);
    }
    
    cout << maxi.first << "\n";
  }

  return 0;
}
