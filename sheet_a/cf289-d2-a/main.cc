#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long score = 0;
    for (long long i = 0; i < n; i++) {
        long long left, right;
        cin >> left >> right;
        score = (score + right - left + 1) % k;
    }

    if (score == 0)
        cout << "0\n";
    else
        cout << k - score << "\n";
    return 0;
}