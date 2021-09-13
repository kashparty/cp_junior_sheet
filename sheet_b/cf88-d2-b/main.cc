#include <bits/stdc++.h>
using namespace std;

struct Point {
    int r, c;
    double dist(const Point& other) {
        return hypot(abs(r - other.r), abs(c - other.c));
    }
};

int main() {
    int n, m, X;
    cin >> n >> m >> X;

    unordered_map<char, vector<Point>> keys;
    for (int r = 0; r < n; r++) {
        string s;
        cin >> s;
        for (int c = 0; c < m; c++) {
            keys[s[c]].push_back(Point{r, c});
        }
    }

    int q;
    cin >> q;
    string T;
    cin >> T;

    unordered_map<char, int> counts;
    for (char x : T) counts[x]++;

    int ans = 0;
    for (auto it : counts) {
        char x = it.first;
        if ('A' <= x && x <= 'Z') {
            if (keys.find(x + 32) == keys.end() ||
                keys.find('S') == keys.end()) {
                cout << "-1\n";
                return 0;
            }

            double min_dist = INFINITY;

            for (Point shift : keys['S']) {
                for (Point lower : keys[x + 32]) {
                    min_dist = min(min_dist, shift.dist(lower));
                }
            }

            if (min_dist > X) ans += it.second;
        } else if (keys.find(x) == keys.end()) {
            cout << "-1\n";
            return 0;
        }
    }

    cout << ans << "\n";
}