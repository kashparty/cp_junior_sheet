#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t, k, d;
    cin >> n >> t >> k >> d;

    int before_oven = (int)ceil((double)d/(double)t);
    int remaining = (int)ceil((double)n/(double)k) - before_oven;

    if (remaining >= 2) cout << "YES\n";
    else if (remaining >= 1 && d % t != 0) cout << "YES\n";
    else cout << "NO\n";
}
