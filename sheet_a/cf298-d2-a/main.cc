#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    char first_seen = '.';
    int start, end;
    for (int i = 0; i < n; i++) {
        if (s[i] != '.' && first_seen == '.') {
            first_seen = s[i];
            if (s[i] == 'R')
                start = i;
            else
                end = i - 1;
        } else if (s[i] != first_seen) {
            if (s[i] == 'R')
                start = i;
            else if (s[i] == 'L')
                end = i - 1;
            else if (s[i] == '.') {
                if (first_seen == 'L')
                    start = i - 1;
                else if (first_seen == 'R')
                    end = i;
            }

            break;
        }
    }

    cout << start + 1 << " " << end + 1 << "\n";
    return 0;
}