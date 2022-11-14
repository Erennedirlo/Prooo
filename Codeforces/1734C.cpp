// Written by: Erennedirlo, 03/10/2022
#include <bits/stdc++.h>
using namespace std;

int main() {
  cout.tie(0); cin.tie(0); ios_base::sync_with_stdio(0);

  int t;
  
  for (cin >> t; t; --t){
    int n;
    vector<int> v(n + 1), prime(n + 1);
    
    for(int i = 2; i <= n; ++i) {
      for (int j = 2 * i; j <= 2 * n; j += i) {
        prime[j] = 1;
      }
    }
    
    int cost = 0;

    for(int i = 1; i <= n; ++i) {
      cin >> v[i];
      
      if (v[i] == 0) {
        if (prime[v[i]] == 0) {
          int check = 1;

          for (int j = 1; j < i; ++j){
            if (v[i] == 1) {
              check = 0;
              break;
            }
          }
          
          if (check) cost++;
          else cost += i;
        }

        else {
          int mini = i;
          int yedek = v[i];

          for (int k = 2 ; yedek > 0; ++k) {
            while (yedek % k == 0) {
              yedek /= k;
              if (v[yedek] == 0) {
                if (yedek < mini) {
                  mini = yedek;
                }
              }
            }
          }
        } 
      }
    }

  }

  return 0;
}
