// Written by: Erennedirlo
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a, x, n) for (int a = x; a < n; ++a)

vector<int> ctr(10);

int maxEl() {
  int maxi = 0;
  for (auto u : ctr) maxi = max(maxi, u);
  return maxi;
}

int main() {
  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);
  
  int t;
  for (cin >> t; t; t--) {
    int n;
    string s;
    cin >> n >> s;
    
    int dist = 0, ans = 0;

    loop(i, 0, n) {
      for (int j = i; (j < i + 100) && (j < n); ++j) {
        if (ctr[s[j] - '0']++ == 0) ++dist;

        if (dist >= maxEl()) ++ans;
      }

      dist = 0;
      fill(ctr.begin(), ctr.end(), 0);
    }

    cout << ans << "\n";
  }

  return 0;
}

