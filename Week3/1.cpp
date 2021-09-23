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
        int i, j, key, comp = 0, sh = 0;
        for (i = 1; i < n; i++) {
            key = A[i];
            j = i - 1;
            while (j >= 0 && A[j] > key && ++comp) {
                A[j + 1] = A[j];
                sh++;
                j--;
            }
            A[j + 1] = key;
            sh++;
        }
        for (int x : A) cout << x << ' ';
        cout << '\n' << "Comparisions = " << comp << "\nShifts = " << sh << '\n';
    }
    return 0;
}