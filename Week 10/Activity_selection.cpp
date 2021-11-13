#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
  int n, x;
  cin >> n;
  vector<int> start(n), end(n), order(n);
  iota(order.begin(), order.end(), 0);

  for (int i = 0; i < n; i++) cin >> start[i];
  for (int i = 0; i < n; i++) cin >> end[i];
  
  sort(order.begin(), order.end(), [&](int i, int j) {
    if (end[i] == end[j]) return start[i] < start[j];
    else return end[i] < end[j];
  });
  
  vector<int> who;
  int ans = 0, prev_end = -1;

  for (int i : order) {
    if (start[i] > prev_end) {
      who.push_back(i + 1);
      ans += 1;
      prev_end = end[i];
    }
  }
  cout << "Number of Non conflicting activities: " << ans << '\n';
  cout << "List of selected Activities: ";

  for (int i = 0; i < who.size(); i++) {
    if (i > 0) cout << ", ";
    cout << who[i];
  }
  return 0;
}
