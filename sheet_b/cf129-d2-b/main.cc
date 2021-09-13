#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<unordered_set<int>> graph(n + 1, unordered_set<int>());
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].insert(b);
        graph[b].insert(a);
    }

    int ans = 0;
    bool done = false;
    while (!done) {
        done = true;
        vector<pair<int, int>> to_erase;
        for (int i = 1; i <= n; i++) {
            if (graph[i].size() == 1) {
                int other = *graph[i].begin();
                to_erase.push_back({i, other});
            }
        }

        if (!to_erase.empty()) {
            done = false;
            ans++;
            for (pair<int, int> p : to_erase) {
                graph[p.first].erase(p.second);
                graph[p.second].erase(p.first);
            }
        }
    }

    cout << ans << "\n";
}