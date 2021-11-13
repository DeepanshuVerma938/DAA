#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
  int n;
  cin >> n;
  vector<int> A(n);
  for (int& x : A) cin >> x;

  sort(A.begin(), A.end());
  
  bool exists = 0;

  for (int i = 0; i < n; i++) {
    int freq = upper_bound(A.begin(), A.end(), A[i]) - lower_bound(A.begin(), A.end(), A[i]);
    if (freq * 2 > n) {
      exists = true;
    }
  }

  if (exists) cout << "Yes\n";
  else cout << "No\n";

  int median = A[n / 2];
  if (n % 2 == 0) {
    median = (median + A[n / 2 - 1]) / 2;
  }
  cout << median;
  return 0;
}
