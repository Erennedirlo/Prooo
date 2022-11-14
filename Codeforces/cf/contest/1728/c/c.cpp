// Written by: Erennedirlo, 20/09/2022
#include <bits/stdc++.h>
using namespace std;

int logon(int a) {
  int cnt = 0;

  while (a) {
    a /= 10;
    ++cnt;
  }

  return cnt;
}

void solve() {
  int n;
  cin >> n;

  vector<int> va(n), vb(n);
  for (int i = 0; i < n; ++i) {
    cin >> va[i];
  }
  for (int i = 0; i < n; ++i) {
    cin >> vb[i];
  }

  int counter = 0;
  priority_queue<int> pqa(va.begin(), va.end()), pqb(vb.begin(), vb.end());

  while (!pqa.empty()) {
    if (pqa.top() > pqb.top()) {
      pqa.push(logon(pqa.top()));
      pqa.pop();
      ++counter;
    } else if (pqb.top() > pqa.top()) {
      pqb.push(logon(pqb.top()));
      pqb.pop();
      ++counter;
    } else {
      pqa.pop();
      pqb.pop();
    }
  }

  cout << counter << "\n";
}

int main() {
    cout.tie(0);
    cin.tie(0);
    ios_base::sync_with_stdio(0);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
