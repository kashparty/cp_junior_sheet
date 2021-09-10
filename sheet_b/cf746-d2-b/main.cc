#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<char> ans;
    for (int i = s.length() - 1; i >= 0; i--) {
        ans.insert(ans.begin() + ans.size() / 2, s[i]);
    }

    for (char c : ans) cout << c;
    cout << "\n";
}