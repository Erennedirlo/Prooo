#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  string s;
  getline(cin >> ws, s);

  int deleted = 0;

  for (int i = 0; i < s.length(); ++i) {
    if (s[i] == '0') {
      s[i] = '9';
      deleted = 1;
      break;
    }
  }

  if (deleted) {
    for (int i = 0; i < s.length(); ++i) {
      if (s[i] != '9') {
        cout << s[i];
      }
    }
  } else {
    for (int i = 1; i < s.length(); ++i) {
      cout << s[i];
    }
  }
  return 0;
}
