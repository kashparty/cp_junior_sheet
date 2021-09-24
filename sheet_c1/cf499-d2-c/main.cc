#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int n;
    cin >> n;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        long long a, b, c;
        cin >> a >> b >> c;
        long long result1 = a * x1 + b * y1 + c;
        long long result2 = a * x2 + b * y2 + c;
        if (result1 < 0 && result2 > 0)
            ans++;
        else if (result1 > 0 && result2 < 0)
            ans++;
    }

    cout << ans << "\n";
}