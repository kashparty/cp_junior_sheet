#include <bits/stdc++.h>
using namespace std;

long long choose(long long n, long long r) {
    if (r > n) return 0;
    if (r * 2 > n) r = n - r;
    if (r == 0) return 1;

    long long result = n;
    for (long long i = 2; i <= r; i++) {
        result *= (n - i + 1);
        result /= i;
    }

    return result;
}

int main() {
    int n;
    cin >> n;
    vector<pair<long long, long long>> pos(n);
    for (int i = 0; i < n; i++) cin >> pos[i].first >> pos[i].second;

    sort(pos.begin(), pos.end());

    long long subtract = 0;
    pair<long long, long long> prev = {LLONG_MAX, LLONG_MAX};
    long long counter = 0;
    for (int i = 0; i < n; i++) {
        if (pos[i] == prev) {
            counter++;
        } else {
            subtract += choose(counter, 2);
            counter = 1;
        }

        prev = pos[i];
    }

    subtract += choose(counter, 2);

    long long x_wise_answer = 0;
    long long prev_x = LLONG_MAX;
    long long counter_x = 0;
    for (int i = 0; i < n; i++) {
        if (pos[i].first == prev_x) {
            counter_x++;
        } else {
            x_wise_answer += choose(counter_x, 2);
            counter_x = 1;
        }
        prev_x = pos[i].first;
    }

    x_wise_answer += choose(counter_x, 2);

    sort(pos.begin(), pos.end(), [](const auto& a, const auto& b) {
        if (a.second != b.second)
            return a.second < b.second;
        else
            return a.first < b.first;
    });

    long long y_wise_answer = 0;
    long long prev_y = LLONG_MAX;
    long long counter_y = 0;
    for (int i = 0; i < n; i++) {
        if (pos[i].second == prev_y) {
            counter_y++;
        } else {
            y_wise_answer += choose(counter_y, 2);
            counter_y = 1;
        }

        prev_y = pos[i].second;
    }

    y_wise_answer += choose(counter_y, 2);

    cout << x_wise_answer + y_wise_answer - subtract << "\n";
}