// Written by: Erennedirlo, 06/10/2022
#include <bits/stdc++.h>
using namespace std;

int makes_circle(unordered_map<char, char> &circle, char a, char target) {
  if (circle[a] == 0) {
    return 0;
  }
  if (circle[a] == target) {
    return 1;
  }
  return makes_circle(circle, circle[a], target);
}

int main() {
  cout.tie(0);
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  int t;

  for (cin >> t; t; --t) {
    int n;
    cin >> n;

    unordered_map<char, char> circle;
    unordered_map<char, bool> being_used;

    for (int i = 0; i < n; ++i) {
      char tmp;
      cin >> tmp;

      if (circle[tmp] == 0) {
        char a = 'a';
        for (; makes_circle(circle, a, tmp) || being_used[a] == 1 || a == tmp; ++a);

        circle[tmp] = a;
        being_used[a] = 1;
      }

      cout << circle[tmp];
    }
    
    
    for(char a = 'a'; 1; ++a) {
      if (being_used[a] == 0) {
        cout << a << "\n";
        break;
      }
    }
    
    cout << "\n";
  }
  
  return 0;
}
