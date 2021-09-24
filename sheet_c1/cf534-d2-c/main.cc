#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long A;
    cin >> n >> A;

    vector<long long> d(n);
    for (int i = 0; i < n; i++) cin >> d[i];

    long long s = 0;
    for (int i = 0; i < n; i++) s += d[i];

    if (n == 1)
        cout << d[0] - 1 << "\n";
    else {
        for (int i = 0; i < n; i++) {
            long long max_value = A - (n - 1);
            long long min_value = A - (s - d[i]);
            long long exclude_top = d[i] - min(max_value, d[i]);
            long long exclude_bottom = max(1ll, min_value) - 1;

            cout << exclude_top + exclude_bottom << " ";
        }
        cout << "\n";
    }
}