#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> heights(n + 1);
    heights[0] = 0;

    int min_current = 0;
    int current = 0;
    for (int i = 1; i <= n; i++) {
        cin >> heights[i];
        if (i > 0) {
            current += heights[i - 1] - heights[i];
            min_current = min(min_current, current);
        }
    }

    if (min_current < 0) cout << -min_current << "\n";
    else cout << "0\n";
}