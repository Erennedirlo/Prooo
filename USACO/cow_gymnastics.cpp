#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, j, k) for(int i = j; i < k; ++i)

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  freopen("gymnastics.in", "r", stdin);
  freopen("gymnastics.out", "w", stdout);

  int k, n;
  cin >> k >> n;
  vector<vector<int>> rank(k, vector<int>(n));
  
  loop(i, 0, k) { 
    loop(j, 0, n) {
      int a;
      cin >> a;
      rank[i][a - 1] = n - j;   
    }
  }
  
  int ctr = 0;

  loop(i, 0, n) {
    loop(j, 0, n) {
      if (i == j) continue;
      
      int ans = 1;

      loop(z, 0, k) {
        if (rank[z][i] < rank[z][j]) {
          ans = 0;
          break;
        }
      }

      ctr += ans;
    }
  }

  cout << ctr << "\n";

  return 0;
}
