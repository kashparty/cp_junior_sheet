#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> costs(n + 1, 0);
    vector<long long> costs_sorted(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> costs[i];
        costs_sorted[i] = costs[i];
    }

    sort(costs_sorted.begin(), costs_sorted.end());
    for (int i = 1; i <= n; i++) {
        costs[i] = costs[i] + costs[i - 1];
        costs_sorted[i] = costs_sorted[i] + costs_sorted[i - 1];
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1) cout << costs[r] - costs[l - 1];
        if (type == 2) cout << costs_sorted[r] - costs_sorted[l - 1];
        cout << "\n";
    }
}