#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<char> diag;
    set<char> nondiag;

    for (int i = 0; i < n; i++) {
        string row;
        cin >> row;

        for (int j = 0; j < n; j++) {
            if (i == j || i + j == n - 1) diag.insert(row[j]);
            else nondiag.insert(row[j]);
        }
    }

    if (diag.size() > 1 || nondiag.size() > 1) cout << "NO\n";
    else if (*diag.begin() == *nondiag.begin()) cout << "NO\n";
    else cout << "YES\n";
    return 0;
}
