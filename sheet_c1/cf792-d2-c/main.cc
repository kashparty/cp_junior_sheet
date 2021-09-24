#include <bits/stdc++.h>
using namespace std;

vector<char> beautify(vector<char> v, int start) {
    vector<char> result;
    for (int i = start; i < v.size(); i++) result.push_back(v[i]);
    int sum_mod = 0;
    for (int i = 0; i < result.size(); i++)
        sum_mod = (sum_mod + (result[i] - '0')) % 3;

    if (sum_mod == 0)
        return result;
    else {
        int found_at = -1;
        for (int i = 1; i < result.size(); i++) {
            if ((result[i] - '0') % 3 == sum_mod) {
                found_at = i;
                break;
            }
        }

        if (found_at != -1) {
            result.erase(result.begin() + found_at);
            return result;
        } else {
            int found_first = -1;
            int found_second = -1;
            for (int i = 1; i < result.size(); i++) {
                if ((result[i] - '0') % 3 == (3 - sum_mod)) {
                    if (found_first == -1)
                        found_first = i;
                    else {
                        found_second = i;
                        break;
                    }
                }
            }

            if (found_second != -1) {
                result.erase(result.begin() + found_second);
                result.erase(result.begin() + found_first);
                return result;
            }
        }
    }

    return vector<char>();
}

int main() {
    string s;
    cin >> s;
    vector<char> v(s.length());
    for (int i = 0; i < s.length(); i++) v[i] = s[i];

    vector<char> ans;
    bool found = false;
    int count = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] != '0') {
            count++;
            vector<char> result = beautify(v, i);
            if (result.size() > ans.size()) {
                found = true;
                ans = result;
            }
        }

        if (count >= 3) break;
    }

    if (found) {
        for (char x : ans) cout << x;
        cout << "\n";
    } else {
        for (char x : v) {
            if (x == '0') {
                cout << "0\n";
                return 0;
            }
        }
        cout << "-1\n";
    }
}