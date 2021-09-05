#include <bits/stdc++.h>
using namespace std;

int main() {
    long long l, r;
    cin >> l >> r;

    long long a, b, c;
    if (l % 2 == 0) {
        a = l;
    } else if (l % 2 == 1) {
        a = l + 1;
    }

    b = a + 1;
    c = b + 1;

    if (c > r) cout << "-1\n";
    else cout << a << " " << b << " " << c << "\n";
    return 0;
}
