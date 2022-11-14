#include <bits/stdc++.h>
using namespace std;
#define loop(i, j, k) for(int i = j; i < k; ++i)

int main() {
  int m, n, k;
  cin >> m >> n >> k;

  string s[m];

  loop(i, 0, m) cin >> s[i];

  loop(i, 0, m){
    loop(j, 0, n) cout << s[i][j] << s[i][j];
    cout << "\n";
    loop(j, 0, n) cout << s[i][j] << s[i][j];
    cout << "\n";
  }

  return 0;
}
