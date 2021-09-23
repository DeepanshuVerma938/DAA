#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int& x : A) cin >> x;
        sort(A.begin(), A.end());
        bool has = 0;
        for (int i = 1; i < n; i++) {
            if (A[i] == A[i - 1])
                has = 1;
        }
        cout << (has ? "YES" : "NO") << '\n';
    }
    return 0;
}