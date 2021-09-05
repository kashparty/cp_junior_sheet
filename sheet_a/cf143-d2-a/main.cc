#include <bits/stdc++.h>
using namespace std;

int main() {
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

    for (int a = 1; a < 10; a++) {
        for (int b = 1; b < 10; b++) {
            if (a == b) continue;
            for (int c = 1; c < 10; c++) {
                if (a == c || b == c) continue;
                for (int d = 1; d < 10; d++) {
                    if (a == d || b == d || c == d) continue;

                    bool valid = a + b == r1 && c + d == r2 && a + c == c1 && b + d == c2 && a + d == d1 && b + c == d2;
                    if (valid) {
                        cout << a << " " << b << "\n" << c << " " << d << "\n";
                        return 0;
                    }
                }
            }
        }
    }

    cout << "-1\n";
    return 0;
}