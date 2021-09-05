#include <bits/stdc++.h>
using namespace std;

int modpow(int x, long long n) {
    if (n == 0) return 1;
    if (n % 2 == 0) {
        int m = modpow(x, n / 2);
        return (m * m) % 10;
    }
    
    // n % 2 == 1
    return (x * modpow(x, n - 1)) % 10;
}

int main() {
    long long n;
    cin >> n;
    cout << modpow(1378, n) << "\n";
    return 0;
}
