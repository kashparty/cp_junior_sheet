#include <bits/stdc++.h>
using namespace std;

bool valid(vector<pair<int, int>> z_segments, vector<pair<int, int>> x_segments,
           int offset) {
    for (pair<int, int> z : z_segments) {
        for (pair<int, int> x : x_segments) {
            int z_left = z.first;
            int z_right = z.second;
            int x_left = x.first + offset;
            int x_right = x.second + offset;

            if (z_left <= x_left && z_right >= x_left) return true;
            if (z_left <= x_right && z_right >= x_right) return true;
            if (z_left >= x_left && z_right <= x_right) return true;
            if (z_left <= x_left && z_right >= x_right) return true;
        }
    }

    return false;
}

int main() {
    int p, q, l, r;
    cin >> p >> q >> l >> r;

    vector<pair<int, int>> z_segments(p);
    vector<pair<int, int>> x_segments(q);

    for (int i = 0; i < p; i++)
        cin >> z_segments[i].first >> z_segments[i].second;
    for (int i = 0; i < q; i++)
        cin >> x_segments[i].first >> x_segments[i].second;

    int ans = 0;
    for (int offset = l; offset <= r; offset++) {
        if (valid(z_segments, x_segments, offset)) ans++;
    }

    cout << ans << "\n";
}