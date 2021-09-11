#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, f;
    cin >> n >> f;
    vector<pair<long long, long long>> data(n);
    for (int i = 0; i < n; i++) cin >> data[i].first >> data[i].second;

    sort(data.begin(), data.end(), [](const auto& a, const auto& b) {
        long long a_value = min(2 * a.first, a.second) - min(a.first, a.second);
        long long b_value = min(2 * b.first, b.second) - min(b.first, b.second);
        return a_value > b_value;
    });

    long long ans = 0;
    for (int i = 0; i < f; i++) {
        ans += min(2 * data[i].first, data[i].second);
    }
    for (int i = f; i < n; i++) {
        ans += min(data[i].first, data[i].second);
    }

    cout << ans << "\n";
}