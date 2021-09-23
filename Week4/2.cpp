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

void quickSort(vector<int>& A, int L, int R) {
    if (L < R) {
        int part = partition(A, L, R);
        quickSort(A, L, part - 1);
        quickSort(A, part + 1, R);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int& x : A) cin >> x;
        quickSort(A, 0, n - 1);
        for (int i = 0; i < n; i++) {
            cout << A[i] << ' ';
        }
        cout << "\nComparisions = " << comp << "\nSwaps = " << sw << '\n';
        comp = sw = 0;
    }
    return 0;
}