#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, b, d;
    cin >> n >> b >> d;
    
    int ans = 0;
    int current = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x <= b) current += x;
        if (current > d) {
            ans++;
            current = 0;
        }
    }

    cout << ans << "\n";
}
