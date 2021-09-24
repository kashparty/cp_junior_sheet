#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    set<int> alive;
    vector<int> ans(n);
    for (int i = 1; i <= n; i++) alive.insert(i);

    for (int i = 0; i < m; i++) {
        int left, right, winner;
        cin >> left >> right >> winner;

        set<int>::iterator it;
        vector<int> to_erase;
        for (it = alive.lower_bound(left); it != alive.end() && *it <= right;
             it++) {
            if (*it != winner) to_erase.push_back(*it);
        }

        for (auto x : to_erase) {
            alive.erase(x);
            ans[x - 1] = winner;
        }
    }

    for (int x : ans) cout << x << " ";
    cout << "\n";
}