#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 1;
    bool done = false;
    vector<pair<int, int>> ratings(n);
    for (int i = 0; i < n; i++) {
        cin >> ratings[i].first >> ratings[i].second;
        if (ratings[i].first != ratings[i].second) {
            ans = 2;
            done = true;
        }
        else if (!done && i > 0 && ratings[i].first > ratings[i - 1].first) {
            ans = 0;
            done = true;
        }
    }

    if (ans == 1) cout << "maybe";
    else if (ans == 0) cout << "unrated";
    else cout << "rated";
    cout << "\n";
}
