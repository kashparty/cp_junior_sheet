#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> positions(n + 1);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        positions[x] = i + 1;
    }

    int m;
    cin >> m;
    long long v = 0, p = 0;
    for (int i = 0; i < m; i++) {
        int q;
        cin >> q;
        v += positions[q];
        p += n + 1 - positions[q];
    }

    cout << v << " " << p << "\n";
}