#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, m;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
      cin >> A[i];
    }
    cin >> m;
    int cnt = 0;
    bool found = 0;
    int L = 0, R = n, M;
    while (R - L > 1) {
      M = L + (R - L) / 2;
      cnt++;
      if (m == A[M]) {
        found = true;
        break;
      }
      if (m >= A[M])
        L = M;
      else R = M;
    }
    if (found) cout << "Present " << cnt;
    else cout << "Not present " << cnt;
    cout << endl; 
  }
  return 0;
}