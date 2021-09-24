#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q, c;
    cin >> n >> q >> c;

    vector<vector<unordered_map<int, int>>> stars(
        101, vector<unordered_map<int, int>>(101, unordered_map<int, int>()));
    for (int i = 0; i < n; i++) {
        int x, y, s;
        cin >> x >> y >> s;
        stars[x][y][s]++;
    }

    vector<vector<vector<int>>> prefix(
        c + 1, vector<vector<int>>(101, vector<int>(101, 0)));
    for (int i = 0; i <= c; i++) {
        for (int x = 1; x <= 100; x++) {
            for (int y = 1; y <= 100; y++) {
                prefix[i][x][y] = prefix[i][x - 1][y] + prefix[i][x][y - 1] -
                                  prefix[i][x - 1][y - 1] + stars[x][y][i];
            }
        }
    }

    for (int i = 0; i < q; i++) {
        long long t;
        int x1, y1, x2, y2;
        cin >> t >> x1 >> y1 >> x2 >> y2;

        long long ans = 0;
        for (int j = 0; j <= c; j++) {
            long long num = prefix[j][x2][y2] - prefix[j][x1 - 1][y2] -
                            prefix[j][x2][y1 - 1] + prefix[j][x1 - 1][y1 - 1];
            ans += num * ((j + t) % (c + 1));
        }

        cout << ans << "\n";
    }
}