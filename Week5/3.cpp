#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
        cin >> A[i];
    cin >> m;
    int B[m];
    for (int j = 0; j < m; j++)
        cin >> B[j];
    vector<int> ans;
    for (int i = 0, j = 0; i < n; i++, j++) {
        while (j < m && B[j] < A[i]) j++;
        if (j < m && A[i] == B[j])
            ans.push_back(A[i]);
    }
    for (int x : ans) cout << x << ' ';
    return 0;
}
