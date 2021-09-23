#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n + 1];
        for (int i = 1; i <= n; i++) 
            cin >> A[i];
        int k;
        cin >> k;
        int cur, prev = 1, comp = 0;
        for (cur = 1; cur < n; prev = cur, cur = min(n, cur << 1)) {
            cout << prev << cur << '\n';
            if (cur == prev && prev == n) break;
            if (A[prev] <= k && ++comp && k <= A[cur] && ++comp) break;
        }
        bool found = 0;
        for (int i = prev; i <= cur; i++)
            if (A[i] == k && ++comp) {
                found = 1;
                break;
            }
        if (found) cout << "present " << comp << '\n';
        else cout << "Not Present " << comp << '\n';
    }
    return 0;
}