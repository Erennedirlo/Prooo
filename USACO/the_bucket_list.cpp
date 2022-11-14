// Written by: Erennedirlo, 31/10/2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a, x, n) for (int a = x; a < n; ++a)

int main() {
  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);
  freopen("blist.in", "r", stdin);
  freopen("blist.out", "w", stdout);

  int n;
  cin >> n;

  vector<int> s(n), t(n), b(n);

  loop(i, 0, n) {
    cin >> s[i] >> t[i] >> b[i];
  }
  
  int maxi = 0;

  loop(i, 0, n) {
    int st = s[i];
    int buckets = b[i];
    
    loop(j, 0, n) {
      if (j == i) continue;

      if (s[j] <= st && t[j] >= st) {
        buckets += b[j];
      }
    }
    
    maxi = max(maxi, buckets);
  }

  cout << maxi << "\n";
  return 0;
}
