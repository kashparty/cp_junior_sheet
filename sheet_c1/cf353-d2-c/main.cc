#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    string s;
    cin >> s;

    vector<int> prefix_all(n + 1);
    prefix_all[0] = 0;

    for (int i = 1; i <= n; i++) {
        prefix_all[i] = prefix_all[i - 1] + a[i - 1];
    }

    vector<int> dp(n + 1);
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        if (s[i - 1] == '0')
            dp[i] = dp[i - 1];
        else
            dp[i] = max(dp[i - 1] + a[i - 1], prefix_all[i - 1]);
    }

    cout << dp[n] << "\n";
}