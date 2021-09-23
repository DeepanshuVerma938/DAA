#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<char> A(n);
        for (char& x : A) cin >> x;
        vector<int> cnt(26);
        for (const char& x : A)
            cnt[x - 'a']++;
        int mxf = 0;
        char who = '\0';
        for (int i = 0; i < 26; i++) {
            if (cnt[i] > mxf) {
                mxf = cnt[i];
                who = i + 'a';
            }
        }
        if (mxf == 1) cout << "No Duplicates found\n";
        else cout << who << " - " << mxf << '\n';
    }
    return 0;
}