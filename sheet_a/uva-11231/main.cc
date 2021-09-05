#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, c;
    
    while (cin >> n >> m >> c) {
        if (n == 0 && m == 0 && c == 0) break;
        
        if ((n - 7) % 2 == 1 && (m - 7) % 2 == 1) {
            if (c == 1) cout << (n - 7) * (m - 7) / 2 + 1 << "\n";
            else cout << (n - 7) * (m - 7) / 2 << "\n";
        } else cout << (n - 7) * (m - 7) / 2 << "\n";
    }

    return 0;
}
