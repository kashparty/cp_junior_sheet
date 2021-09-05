#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, x;
    cin >> n >> x;

    long long dis = 0;
    while (n--) {
        char c;
        long long d;
        cin >> c >> d;
        if (c == '+') {
            x += d;
        } else if (c == '-') {
            if (x >= d) x -= d;
            else dis++;
        }
    }

    cout << x << " " << dis << "\n";
}
