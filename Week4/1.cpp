#include<bits/stdc++.h>
using namespace std;

int comp, inv;
void merge(vector<int>& A, int l, int M, int r) {
    int i = l, j = M;
    vector<int> temp;
    while (i < M && j <= r) {
        comp++;
        if (A[i] <= A[j])
            temp.push_back(A[i++]);
        else {
            temp.push_back(A[j++]);
            inv += M - i;
        }
    }
    while (i < M) {
        temp.push_back(A[i++]);
    }
    while (j <= r) {
        temp.push_back(A[j++]);
    }
    for (int i = l; i <= r; i++)
        A[i] = temp[i - l];
}

void mergeSort(vector<int>& A, int l, int r) {
    if (l >= r) return;
    int M = (l + r) / 2;
    mergeSort(A, l, M);
    mergeSort(A, M + 1, r);
    merge(A, l, M + 1, r);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int& x : A) cin >> x;
        inv = 0;
        mergeSort(A, 0, n - 1);
        for (int i = 0; i < n; i++) {
            cout << A[i] << ' ';
        }
        cout << "\nComparisions = " << comp << "\nInversions = " << inv << '\n';
        comp = inv = 0;
    }
    return 0;
}