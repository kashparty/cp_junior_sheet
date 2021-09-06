#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<int, int> occ;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        occ[x]++;
    }

    bool possible = true;
    for (auto it : occ) {
        if (it.second > (n + 1) / 2) possible = false;
    }

    if (possible)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}