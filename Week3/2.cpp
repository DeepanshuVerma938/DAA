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
        int comp = 0, sw = 0;
        for (int i = 0; i + 1 < n; i++) {
            int mxi = i;
            for (int j = i + 1; j < n; j++) {
                if (++comp && A[j] > A[mxi]) {
                    mxi = j;
                }
            }
            swap(A[i], A[mxi]);
            ++sw;
        }
        for (int x : A) cout << x << ' ';
        cout << '\n' << "Comparisions = " << comp << "\nSwaps = " << sw << '\n';
    }
    return 0;
}