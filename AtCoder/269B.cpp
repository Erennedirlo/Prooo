#include <bits/stdc++.h>
using namespace std;

int main() {

  int A = 0, B = 0, C = 0, D = 0;

  for (int i = 0; i < 10; ++i) {
    string s;
    for (int j = 0; j < 10; ++j) {
      cin >> s[j];

      if (s[j] == '#') {
        B = i + 1;
        if (C == 0) {
          C = j + 1;
          A = i + 1;
        }
        if (D < j + 1) {
          D = j + 1;
        }
      }
    }
  }

  cout << A << " " << B << "\n" << C << " " << D << "\n";

  return 0;
}
