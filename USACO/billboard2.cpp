#include<bits/stdc++.h>
using namespace std;

typedef struct board {
  int x1, x2, y1, y2;
  int area;
} board;

int main() {
  board first, second;

  cin >> first.x1 >> first.y1 >> first.x2 >> first.y2;
  cin >> second.x1 >> second.y1 >> second.x2 >> second.y2;
  first.area = (first.x2 -first.x1) * (first.y2 - first.y1);

  if (second.x1 <= first.x1 && second.x2 >= first.x2) {
    if (second.y2 >= first.y1 && second.y1 <= first.y1) {
      first.area -= (second.y2 - first.y1) * (first.x2 - first.x1);
    }
    else if (second.y1 <= first.y2 && second.y2 >= first.y2) {
      first.area -= (first.y2 - second.y1) * (first.x2 - first.x1);
    }
  }
  else if (second.y1 <= first.y1 && second.y2 >= first.y2) {
    if (second.x1 <= first.x2 && second.x2 >= first.x2) {
      first.area -= (second.x1 - first.x2) * (first.y2 - first.y1);
    }
    else if (second.x2 >= first.x1 && second.x1 <= first.x1) {
      first.area -= (second.x2 - first.x1) * (first.y2 - first.y1);
    }
  }

  cout << first.area << "\n";

  return 0;
}
