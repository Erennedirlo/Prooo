// Written by: Erennedirlo, 17/10/2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n; 

    int arr[n + 1];
    
    int turn = 0, soldan = 1, sagdan = n;
    for (int i = 1; i <= n; ++i, turn = 1 - turn) {
      if (turn) {
        arr[sagdan] = i;
        sagdan--;
      } else {
        arr[soldan] = i;
        soldan++;
      }
    }

    for (int i = 1; i <= n; ++i) {
      cout << arr[i] << " ";
    }
    cout << "\n";
  }

  return 0;
}
