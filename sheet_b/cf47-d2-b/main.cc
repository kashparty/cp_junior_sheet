#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> values(3, 0);

    for (int i = 0; i < 3; i++) {    
        string s;
        cin >> s;
        if (s[1] == '>') values[s[0] - 'A']++;
        else values[s[2] - 'A']++;
    }

    if (values[0] == values[1] && values[1] == values[2]) cout << "Impossible\n";
    else {
        vector<char> order(3);
        for (int i = 0; i < 3; i++) order[values[i]] = 'A' + i;
        for (char c : order) cout << c;
        cout << "\n";
    }
}