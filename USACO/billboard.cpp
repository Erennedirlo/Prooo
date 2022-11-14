#include <bits/stdc++.h>
using namespace std;

typedef struct board {
  int x1, y1, x2, y2;
  int seen;
} board;

int intersect(board a, board b) {
  int overlapX = max(0, min(a.x2, b.x2) - max(a.x1, b.x1));
  int overlapY = max(0, min(a.y2, b.y2) - max(a.y1, b.y1));

  return overlapX * overlapY;
}

int main() {

  board first, second, truck;

  cin >> first.x1 >> first.y1 >> first.x2 >> first.y2;

  cin >> second.x1 >> second.y1 >> second.x2 >> second.y2;

  cin >> truck.x1 >> truck.y1 >> truck.x2 >> truck.y2;
  
  first.seen = (first.x2 - first.x1) * (first.y2 - first.y1);
  
  second.seen = (second.x2 - second.x1) * (second.y2 - second.y1);

  cout << first.seen + second.seen - intersect(first, truck) - intersect(second, truck) << "\n";
  
  return 0;
}
