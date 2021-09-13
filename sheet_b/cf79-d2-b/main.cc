#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k, t;
    cin >> n >> m >> k >> t;

    vector<pair<int, int>> wastes(k + 1);
    wastes[0] = {-1, -1};
    for (int i = 1; i <= k; i++) cin >> wastes[i].first >> wastes[i].second;

    sort(wastes.begin(), wastes.end());

    for (int i = 0; i < t; i++) {
        int r, c;
        cin >> r >> c;

        int x = 0;
        for (int b = wastes.size() / 2; b >= 1; b /= 2) {
            while (x + b < wastes.size() &&
                   (wastes[x + b].first < r ||
                    (wastes[x + b].first == r && wastes[x + b].second <= c)))
                x += b;
        }

        if (wastes[x].first == r && wastes[x].second == c)
            cout << "Waste\n";
        else {
            int type = ((r - 1) * m + c - x - 1) % 3;
            if (type == 0)
                cout << "Carrots\n";
            else if (type == 1)
                cout << "Kiwis\n";
            else
                cout << "Grapes\n";
        }
    }
}