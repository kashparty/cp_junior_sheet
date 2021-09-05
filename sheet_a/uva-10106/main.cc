#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    while (cin >> a >> b) {
        vector<int> a_digits(a.length());
        vector<int> b_digits(b.length());

        for (int i = 0; i < a.length(); i++) a_digits[i] = a[i] - '0';
        for (int i = 0; i < b.length(); i++) b_digits[i] = b[i] - '0';

        deque<int> ans(a.length() + b.length(), 0);

        for (int i = 0; i < a.length(); i++) {
            for (int j = 0; j < b.length(); j++) {
                int digit_product = a_digits[a.length() - i - 1] * b_digits[b.length() - j - 1];
                ans[a.length() + b.length() - i - j - 1] += digit_product % 10;
                ans[a.length() + b.length() - i - j - 2] += digit_product / 10;

                // for (int i = 0; i < a.length() + b.length(); i++) cout << ans[i] << " ";
                // cout << "\n";
            }
        }

        for (int i = a.length() + b.length() - 1; i >= 0; i--) {
            int value = ans[i];
            ans[i] = value % 10;
            if (i > 0) ans[i - 1] += value / 10;
        }

        bool zeroes = false;
        for (int i = 0; i < a.length() + b.length(); i++) {
            if (ans[i] != 0 || zeroes || i == a.length() + b.length() - 1) {
                zeroes = true;
                cout << ans[i];
            }
        }

        cout << "\n";
    }
}
