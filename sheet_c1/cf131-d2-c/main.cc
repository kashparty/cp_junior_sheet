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
    long long n, m, t;
    cin >> n >> m >> t;

    long long ans = 0;
    for (long long boys = 4; boys <= min(n, t - 1); boys++) {
        ans += choose(n, boys) * choose(m, t - boys);
    }

    cout << ans << "\n";
}