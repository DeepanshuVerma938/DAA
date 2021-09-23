#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int &x : A) cin >> x;
        sort(A.begin(), A.end());
        int k;
        cin >> k;
        bool found = 0;
        for (int i = 0; i < n; i++) {
            auto it = lower_bound(A.begin(), A.end(), A[i] - k);
            if (it != A.end() && *it == k - A[i]) {
                cout << A[i] << ' ' << k - A[i] << '\n';
                found = 1;
                break;
            }
        }
        if (!found) cout << "No such pair exist\n";
    }
    return 0;
}
© 2021 GitHub, Inc.