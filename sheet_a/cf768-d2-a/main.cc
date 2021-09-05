#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);

    long long max_strength = LLONG_MIN;
    long long min_strength = LLONG_MAX;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        max_strength = max(max_strength, a[i]);
        min_strength = min(min_strength, a[i]);
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > min_strength && a[i] < max_strength) ans++;
    }

    cout << ans << "\n";
}
