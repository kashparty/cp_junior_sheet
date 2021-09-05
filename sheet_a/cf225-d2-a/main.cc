#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    bool doable = true;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if (x + a == 7 || x + b == 7 || x == a || x == b) doable = false;
    }

    cout << (doable ? "YES" : "NO") << "\n";
    return 0;
}