#include <bits/stdc++.h>
using namespace std;

void solve() {
  int W, H;
  cin >> W >> H;

  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  int w, h;
  cin >> w >> h;

  if (x2 - x1 + w > W && y2 - y1 + h > H) {
    cout << -1 << "\n";
    return;
  } else {
    pair<int, int> loc;

    if (x1 <= W - x2) {
      loc.first = -1;
    } else {
      loc.first = 1;
    }

    if (y1 <= H - y2) {
      loc.second = -1;
    } else {
      loc.second = 1;
    }

    int counterX = 0, counterY = 0;

    if (x2 - x1 + w > W) {
      counterX = INT_MAX;
    } else if (loc.first == -1) {
      counterX += max(0, w - (W - x2));
    } else {
      counterX += max(0, w - x1);
    }

    if (y2 - y1 + h > H) {
      counterY = INT_MAX;
    } else if (loc.second == -1) {
      counterY += max(0, h - (H - y2));
    } else {
      counterY += max(0, h - y1);
    }

    cout << min(counterX, counterY) << "\n";
  }
}

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}
