#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    long long first[5] = {0, 0, 0, 0, 0};
    long long secon[5] = {0, 0, 0, 0, 0};

    for (int i = 0; i < 5; i++) {
        first[i] = a / 5;
        if (i > 0 && a % 5 >= i) first[i]++;

        secon[i] = b / 5;
        if (i > 0 && b % 5 >= i) secon[i]++;
    }

    long long ans = first[0] * secon[0];
    for (int i = 1; i < 5; i++)
        ans += first[i] * secon[5 - i];

    cout << ans << "\n";

    return 0;
}