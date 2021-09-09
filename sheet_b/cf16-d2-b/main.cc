#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> data(m);
    for (int i = 0; i < m; i++) cin >> data[i].first >> data[i].second;

    sort(data.begin(), data.end(), [](const auto& a, const auto& b) {
        return a.second > b.second;
    });

    int ans = 0;
    for (int i = 0; i < m; i++) {
        if (n >= data[i].first) {
            ans += data[i].first * data[i].second;
            n -= data[i].first;
        } else {
            ans += n * data[i].second;
            break;
        }
    }

    cout << ans << "\n";
    return 0;
}