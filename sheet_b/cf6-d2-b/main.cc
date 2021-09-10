#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    char x;
    cin >> n >> m >> x;

    vector<vector<char>> grid(n, vector<char>(m));
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < m; c++) {
            cin >> grid[r][c];
        }
    }

    unordered_set<char> colors;
    colors.insert(x);
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < m; c++) {
            if (grid[r][c] == x) {
                if (r > 0 && grid[r - 1][c] != '.') colors.insert(grid[r - 1][c]);
                if (r < n - 1 && grid[r + 1][c] != '.') colors.insert(grid[r + 1][c]);
                if (c > 0 && grid[r][c - 1] != '.') colors.insert(grid[r][c - 1]);
                if (c < m - 1 && grid[r][c + 1] != '.') colors.insert(grid[r][c + 1]);
            }
        }
    }

    cout << colors.size() - 1 << "\n";
}