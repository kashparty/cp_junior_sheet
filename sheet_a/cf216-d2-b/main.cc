#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n + 1);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    int ans = 0;
    vector<int> seen(n + 1, 0);
    stack<pair<int, int>> items;
    int counter = 1;
    for (int i = 1; i <= n; i++) {
        if (seen[i] > 0) continue;
        items.push({i, counter});

        while (!items.empty()) {
            pair<int, int> current = items.top();
            items.pop();
            if (seen[current.first]) continue;
            seen[current.first] = current.second;

            for (int i : graph[current.first]) {
                items.push({i, current.second});
            }
        }

        bool loop = true;
        int loop_length = 0;
        for (int i = 1; i <= n; i++) {
            if (seen[i] == counter) {
                loop_length++;
                if (graph[i].size() != 2) loop = false;
            }
        }

        if (loop && loop_length % 2 == 1) ans++;
        counter++;
    }

    // for (int i : seen)
    //     cout << i << " ";
    // cout << "\n";

    if ((n - ans) % 2 == 1) ans++;
    cout << ans << "\n";

    return 0;
}