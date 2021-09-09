#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    cin >> n >> a;

    vector<int> criminals(n);
    for (int i = 0; i < n; i++) cin >> criminals[i];

    int ans = 0;
    if (criminals[a - 1]) ans++;

    for (int dist = 1; dist <= max(n - a, a - 1); dist++) {
        int bcd_value = 0;
        bool off_flag = false;
        if (a - 1 - dist >= 0) bcd_value += criminals[a - 1 - dist];
        else off_flag = true;
        if (a - 1 + dist < n) bcd_value += criminals[a - 1 + dist];
        else off_flag = true;

        if (bcd_value == 2) ans += 2;
        else if (bcd_value == 1 && off_flag) ans++;
    }

    cout << ans << "\n";
    return 0;
}