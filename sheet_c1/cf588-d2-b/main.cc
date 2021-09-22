#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<long long> factors;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            factors.push_back(i);
            factors.push_back(n / i);
        }
    }

    sort(factors.begin(), factors.end());
    for (long long j = factors.size() - 1; j >= 0; j--) {
        bool valid = true;
        for (long long i = 2; i * i <= factors[j]; i++) {
            if (factors[j] % (i * i) == 0) {
                valid = false;
                break;
            }
        }

        if (valid) {
            cout << factors[j] << "\n";
            return 0;
        }
    }
}