#include <bits/stdc++.h>
using namespace std;
#define loop(i, j, k) for(int i = j; i < k; ++i)

int main() {
  int x, y;
  cin >> x >> y;

  int dist = 0;

  for (int turn = 1, i = 0; ;turn -= 2 * turn, ++i) {
    if (turn == 1) {
      if (x + (int)pow(2, i) < y || y < x) {
        dist += 2 * pow(2, i);
      } else {
        dist += y - x;
        break;
      }
    } else {
      if (x - (int)pow(2, i) > y || x < y) {
        dist += 2 * pow(2, i);
      } else {
        dist += x - y;
        break;
      }
    }
  }

  cout << dist << "\n";

  return 0;
}
