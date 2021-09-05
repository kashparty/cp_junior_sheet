#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        vector<bool> seen(k + 1, false);
        for (char c : s)
            seen[c - '0'] = true;

        bool valid = true;
        for (int j = 0; j < k + 1; j++) {
            if (!seen[j]) valid = false;
        }

        if (valid) ans++;
    }

    cout << ans << "\n";
    return 0;
}