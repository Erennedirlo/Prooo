#include <bits/stdc++.h>
using namespace std;

typedef struct rectangle {
  int x1, x2, y1, y2;
  int area;
} rectangle;

int main() {
  rectangle first, second;
  cin >> first.x1 >> first.y1 >> first.x2 >> first.y2;
  cin >> second.x1 >> second.y1 >> second.x2 >> second.y2;

  rectangle square;
  square.x1 = min(first.x1, second.x1);
  square.y1 = min(first.y1, second.y1);
  square.x2 = max(first.x2, second.x2);
  square.y2 = max(first.y2, second.y2);

  square.area = max((square.x2 - square.x1) * (square.x2 - square.x1),
                    (square.y2 - square.y1) * (square.y2 - square.y1));
  
  cout << square.area << "\n";

  return 0;
}
