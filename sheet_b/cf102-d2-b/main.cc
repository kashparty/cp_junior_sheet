#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    long long ans = 0;
    while (s.length() != 1) {
        long long digit_sum = 0;
        for (int c : s) digit_sum += c - '0';
        s = to_string(digit_sum);
        ans++;
    }

    cout << ans << "\n";
}