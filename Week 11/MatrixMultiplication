#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int MCM(int i, int j, vector<int>& A, vector<vector<int>>& dp) {
  if (i == j) return 0;

  if (dp[i][j] != -1) return dp[i][j];

  int mn = INF;

  for (int k = i; k < j; k++) {
    mn = min(mn, MCM(i, k, A, dp) + A[i - 1] * A[k] * A[j]) + MCM(k + 1, j, A, dp);
  }
  return dp[i][j] = mn;
}

int main() {
  int n;
  cin >> n;
  vector<int> X(n), Y(n), A(n + 1);
  for (int i = 0; i < n; i++) cin >> X[i] >> Y[i];
  for (int i = 0; i < n - 1; i++) A[i] = X[i];
  A[n - 1] = X[n - 1], A[n] = Y[n - 1];

  vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
  cout << MCM(1, n, A, dp);

  return 0;
}
