#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string ans = "";
    string colors = "ROYGBIV";

    for (int i = 0; i < n / colors.length(); i++) ans += colors;
    int remainder = n - ans.length();
    for (int i = 0; i < remainder; i++) ans += colors[i % 4 + 3];

    cout << ans << "\n";
}