#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
  int n, x;
  cin >> n;
  vector<int> C(n);
  for (int i = 0; i < n; i++) cin >> C[i];
  cin >> x;
  
  // no. of ways to make x;
  vector<int> dp(x + 1);
  dp[0] = 1;

  for (int coin : C) {
    for (int i = 0; i + coin <= x; i++) {
      dp[i + coin] += dp[i];
    }
  }
  cout << dp[x];
  return 0;
}
