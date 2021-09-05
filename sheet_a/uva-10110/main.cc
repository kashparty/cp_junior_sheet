#include <bits/stdc++.h>
using namespace std;

int main() {
    bool done = false;
    while (!done) {
        long long n;
        cin >> n;
        if (n == 0) {
            done = true;
        } else {
            long long rt = (long long)round(sqrt((double)n));
            if (rt * rt == n) cout << "yes\n";
            else cout << "no\n";
        }
    }
    return 0;
}
