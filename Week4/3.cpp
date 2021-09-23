#include<bits/stdc++.h>
using namespace std;

int comp, sw;
int partition(vector<int>& A, int L, int R) {
    int piv = A[R];
    int i = L - 1;
    for (int j = L; j < R; j++) {
        if (++comp && A[j] < piv) {
            swap(A[++i], A[j]);
            ++sw;
        }
    }
    swap(A[i + 1], A[R]);
    ++sw;
    return i + 1;
}

int quickSelect(vector<int>& A, int L, int R, int k) {
    if (k < 0 || k > R - L + 1) return -1;

    int idx = partition(A, L, R);
    if (idx - L + 1 == k) return A[idx];
    else if (idx - L + 1 > k)
        return quickSelect(A, L, idx - 1, k);
    else return quickSelect(A, idx + 1, R, k - (idx - L + 1));

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int& x : A) cin >> x;
        int k;
        cin >> k;
        cout << quickSelect(A, 0, n - 1, k) << '\n';
    }
    return 0;
}