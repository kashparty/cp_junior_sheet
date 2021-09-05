#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    cout << (n % 2 == 0 ? 1 : -1) * ((n + 1) / 2) << "\n";
    return 0;
}
