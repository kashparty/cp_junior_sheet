#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> x(n);

    long long min_x = LLONG_MAX;
    long long max_x = LLONG_MIN;

    for (int i = 0; i < n; i++) {
        cin >> x[i];
        min_x = min(min_x, x[i]);
        max_x = max(max_x, x[i]);
    }

    for (int i = 0; i < n; i++) {
        long long max_dist = max(x[i] - min_x, max_x - x[i]);
        long long min_dist = LLONG_MAX;
        if (i > 0) min_dist = x[i] - x[i - 1];
        if (i < n - 1) min_dist = min(min_dist, x[i + 1] - x[i]);

        cout << min_dist << " " << max_dist << "\n";
    }
}
