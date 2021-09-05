#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    if (t == 10 && n == 1) {
        cout << "-1\n";
        return 0;
    }

    string ans = "";
    ans += to_string(t);
    while (ans.length() < n) ans += "0";
    cout << ans << "\n";

    return 0;
}
