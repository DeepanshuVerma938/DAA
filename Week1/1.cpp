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
    for (int i = 0; i < n; i++) {
      cnt++;
      if (A[i] == m) {
        found = true;
        break;
      }
    }
    if (found) cout << "Present " << cnt;
    else cout << "Not present " << cnt;
    cout << endl; 
  }
  return 0;
}
