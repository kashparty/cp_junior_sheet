#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string ans = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] > '4' && !(s[i] == '9' && i == 0))
            ans += '0' + ('9' - s[i]);
        else
            ans += s[i];
    }

    cout << ans << "\n";
    return 0;
}