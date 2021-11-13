#include<bits/stdc++.h>
using namespace std;
class dsu {
public:
  int P[1000];
  dsu(int n) {
    for (int i = 1; i <= n; i++) {
      P[i] = i;
    }
  }
  int get(int x) {
    return (x == P[x] ? x : (P[x] = get(P[x])));
  }
  bool unite(int x, int y) {
    x = get(x), y = get(y);
    if (x == y) return false;

    P[x] = y;
    return true;
  }
};
int main() {
  int n;
  cin >> n;
  vector<pair<int, pair<int, int>>> edges; // (weight, (u, v))
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      int weight;
      cin >> weight;
      if (weight > 0) {
        edges.push_back(make_pair(weight, make_pair(i, j)));
      }
    }
  }
  dsu D(n);
  sort(edges.begin(), edges.end());
  reverse(edges.begin(), edges.end());
  int mstwt = 0;
  for (auto& x : edges) {
    if (D.unite(x.second.first, x.second.second)) {
      mstwt += x.first;
    }
  }
  cout << mstwt;
  return 0;
}
