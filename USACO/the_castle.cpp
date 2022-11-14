#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> v, visited;
int n, m;

void dfs(int a, int b, int mark) {
  visited[a][b] = mark;

  if (b - 1 >= 0 && visited[a][b - 1] == 0 && (v[a][b - 1] & 4) == 0) {
    dfs(a, b - 1, mark);
  }
  if ((long unsigned int)(b + 1) < v[0].size() && visited[a][b + 1] == 0 &&
      (v[a][b + 1] & 1) == 0) {
    dfs(a, b + 1, mark);
  }
  if (a - 1 >= 0 && visited[a - 1][b] == 0 && (v[a - 1][b] & 8) == 0) {
    dfs(a - 1, b, mark);
  }
  if ((long unsigned int)(a + 1) < v.size() && visited[a + 1][b] == 0 &&
      (v[a + 1][b] & 2) == 0) {
    dfs(a + 1, b, mark);
  }

  return;
}

int hasCorner(int a, int b) {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m - 1; ++j) {
      if ((visited[i][j] == a && visited[i][j + 1] == b) ||
          (visited[i][j] == b && visited[i][j + 1] == a)) {
        return 1;
      }
    }
  }
  return 0;
}

int main() {
  cin >> m >> n;

  v.resize(n);
  visited.resize(n);

  for (int i = 0; i < n; ++i) {
    v[i].resize(m);
    visited[i].resize(m);
    for (int j = 0; j < m; ++j) {
      cin >> v[i][j];
    }
  }

  int marker = 1;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (visited[i][j] == 0) {
        dfs(i, j, marker);
        ++marker;
      }
    }
  }

  vector<int> partsOf(marker);

  pair<int, int> maxi = {INT_MIN, 0};

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      ++partsOf[visited[i][j]];
      if (partsOf[visited[i][j]] > maxi.first) {
        maxi.first = partsOf[visited[i][j]];
        maxi.second = visited[i][j];
      }
    }
  }

  int created = INT_MIN, crtr1 = 0, crtr2 = 0;

  for (int i = 1; i < marker; ++i) {
    for (int j = i; j < marker; ++j) {
      if (i == j) {
        continue;
      }
      if (hasCorner(i, j)) {
        if (created < partsOf[i] + partsOf[j]) {
          crtr1 = i;
          crtr2 = j;
          created = partsOf[i] + partsOf[j];
        }
      }
    }
  }

  int ans1 = 0, ans2 = 0;
  char rota = 0;

  for (int j = 0; j < m; ++j) {
    for (int i = 0; i < n; ++i) {
      if (visited[i][j] != crtr1 && visited[i][j] != crtr2) {
        continue;
      }
      if (i > 0 &&
          (partsOf[visited[i - 1][j]] + partsOf[visited[i][j]] == created) &&
          visited[i - 1][j] != visited[i][j]) {
        ans1 = i + 1;
        ans2 = j + 1;
        rota = 'N';
      } else if (j < m - 1 &&
                 (partsOf[visited[i][j]] + partsOf[visited[i][j + 1]] ==
                  created) &&
                 visited[i][j] != visited[i][j + 1]) {
        ans1 = i + 1;
        ans2 = j + 1;
        rota = 'E';
      }
    }

    if (ans1 != 0) {
      break;
    }
  }

  cout << marker - 1 << "\n";
  cout << maxi.first << "\n";
  cout << created << "\n";
  cout << ans1 << " " << ans2 << " " << rota << "\n";

  return 0;
}
