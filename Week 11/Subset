#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
  int n;
  cin >> n;
  vector<int> A(n);
  int sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> A[i];
    sum += A[i];
  }
  
  // no. of ways to make x;
  vector<bool> dp(sum + 1);
  dp[0] = 1;

  for (int x : A) {
    for (int i = sum; i >= 0; i--) {
      dp[i + x] = dp[i + x] || dp[i];
    }
  }

  if (sum % 2 == 1) cout << "No";
  else if (dp[sum] && dp[sum / 2]) cout << "Yes";
  else cout << "No";
  
  return 0;
}
