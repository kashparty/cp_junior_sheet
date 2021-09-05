#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string dir;
    cin >> dir;

    vector<int> pos(n);
    for (int i = 0; i < n; i++)
        cin >> pos[i];

    int min_ans = -1;
    for (int i = 1; i < n; i++) {
        if (dir[i] == 'L' && dir[i - 1] == 'R') {
            if (min_ans == -1)
                min_ans = (pos[i] - pos[i - 1]) / 2;
            else
                min_ans = min(min_ans, (pos[i] - pos[i - 1]) / 2);
        }
    }

    cout << min_ans << "\n";
    return 0;
}