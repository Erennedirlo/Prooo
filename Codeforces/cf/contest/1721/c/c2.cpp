// Written by: Erennedirlo, 22/09/2022
#include <bits/stdc++.h>
using namespace std;

vector<int> a(200005), b(200005), points(200005), d(200005);

int binSearchMin(int a, int l, int r) {
  int mid = l + (r - l) / 2;
  while (mid != 0 && !(b[mid] >= a && b[mid - 1] < a)) {
    if (b[mid] > a) {
      r = mid - 1;
    } else {
      l = mid + 1;
    }
    mid = l + (r - l) / 2;
  }
  return mid;
}

int SearchMax(int cur, int r) {
  while (cur < r - 1 && b[cur] > a[cur + 1]) {
    ++cur;
  }
  return cur;
}

void solve() {
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    points[i] = d[i] = 0;
  }

  if (n != 1) {
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }

    for (int i = 0; i < n; ++i) {
      cin >> b[i];
    }

    int current = SearchMax(0, n);

    for (int i = 0; i < n - 1; ++i) {
      if (b[i] < a[i + 1]) {
        points[i] = current;
        current = SearchMax(i + 1, n);
      } else {
        points[i] = current;
      }
    }

    if (b[points[n - 2]] < a[n - 1]) {
      points[n - 1] = n - 1;
    } else {
      points[n - 1] = points[n - 2];
    }

    int cur = binSearchMin(a[0], 0, n - 1);
    for (int i = 0; i < n; ++i) {
      if (cur > i) {
        d[i] = b[cur] - a[i];
      } else {
        d[i] = b[binSearchMin(a[i], 0, n - 1)] - a[i];
      }
    }

    for (int i = 0; i < n; ++i) {
      cout << d[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i < n; ++i) {
      d[i] = b[points[i]] - a[i];
    }

    for (int i = 0; i < n; ++i) {
      cout << d[i] << " ";
    }
    cout << "\n";
  } else {
    cin >> a[0] >> b[0];
    cout << b[0] - a[0] << "\n" << b[0] - a[0] << "\n";
  }
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
