#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<string, int> scores;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        scores[s]++;
    }

    int best_score = 0;
    string best_team;
    for (auto it : scores) {
        if (it.second > best_score) {
            best_score = it.second;
            best_team = it.first;
        }
    }

    cout << best_team << "\n";
}
