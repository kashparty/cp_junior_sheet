#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    string ans = "";
    for (int i = 0; i < n; i++) ans += 'a' + (i % k);
    cout << ans << "\n";
    return 0;
}
