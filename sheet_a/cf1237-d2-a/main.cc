#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int tick = false;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            cout << a[i] / 2 << "\n";
        else if (tick) {
            cout << (a[i] + 1) / 2 << "\n";
            tick = !tick;
        } else {
            cout << (a[i] - 1) / 2 << "\n";
            tick = !tick;
        }
    }
    return 0;
}