#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> heights(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> heights[i];
        heights[i] += heights[i - 1];
    }

    int min_sum = INT_MAX;
    int best_start = -1;
    for (int i = 1; i < n + 2 - k; i++) {
        int total = heights[i + k - 1] - heights[i - 1];
        if (total < min_sum) {
            min_sum = total;
            best_start = i;
        }
    }

    cout << best_start << "\n";
}