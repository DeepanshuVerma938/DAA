#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
  int n;
  cin >> n;
  vector<int> T(n), D(n), order(n);
  iota(order.begin(), order.end(), 0);

  for (int i = 0; i < n; i++) cin >> T[i];
  for (int i = 0; i < n; i++) cin >> D[i];

  sort(order.begin(), order.end(), [&](int i, int j) {
    if (D[i] == D[j]) return T[i] < T[j];
    return D[i] < D[j];
  });

  int now = 0;
  vector<int> ans;
  for (int i : order) {
    if (now + T[i] <= D[i]) {
      now = D[i];
      ans.push_back(i + 1);
    }
  }
  
  sort(ans.begin(), ans.end());

  cout << ans.size() << '\n';
  for (int x : ans) cout << x << ' ';

  return 0;
}
