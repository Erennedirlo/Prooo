// Written by: Erennedirlo, 10/10/2022
#include <bits/stdc++.h>
using namespace std;

int main() {
  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);
  
  int t;
  cin >> t;

  while (t--) {

    int n;
    cin >> n;

    int counter1 = 0, counter2 = 0;
    
    vector<int> fir(n), sec(n);

    int firstone = 0, secondone = 0;
  
    for (int i = 0; i < n; ++i) {
      cin >>fir[i];
      if (fir[i]) {
        ++firstone;
      }
    }

    for (int i = 0; i < n; ++i) {
      cin >>sec[i];
      if (sec[i]) {
        ++secondone;
      }
    }

    counter1 = max(firstone - secondone, secondone - firstone) + 1;

    for (int i = 0; i < n; ++i) {
      if (fir[i] != sec[i]) {
        ++counter2;
      }
    }

    cout << min(counter1, counter2) << "\n";
  }
  

  return 0;
}
