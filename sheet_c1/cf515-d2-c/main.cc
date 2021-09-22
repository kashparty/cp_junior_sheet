#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    string transform[10] = {"",  "",   "2", "3",    "223",
                            "5", "53", "7", "2227", "2337"};
    string result = "";
    for (char x : s) result += transform[x - '0'];
    vector<char> ans;
    for (char x : result) ans.push_back(x);
    sort(ans.rbegin(), ans.rend());
    for (char x : ans) cout << x;
    cout << "\n";
}