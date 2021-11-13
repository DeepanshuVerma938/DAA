#include<bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<vector<int>> adj(n + 1, vector<int> (n + 1));
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> adj[i][j];
      if (adj[i][j] == 0) adj[i][j] = (int) 1e9;
    }
  }
  int mstwt = 0;
  vector<bool> vis(n + 1);
  vector<pair<int, int>> mne(n + 1);
  for (int i = 2; i <= n; i++) {
    mne[i].first = int(1e9);
  }
  for (int i = 1; i <= n; i++) {
    int v = -1;
    for (int j = 1; j <= n; j++) {
      if (!vis[j] && (v == -1 || mne[j].first < mne[v].first)) {
        v = j;
      }
    }
    vis[v] = 1;
    mstwt += mne[v].first;

    for (int j = 1; j <= n; j++) {
      if (adj[v][j] < mne[j].first)
        mne[j] = make_pair(adj[v][j], v);
    }
  }
  cout << mstwt;
  return 0;
}
