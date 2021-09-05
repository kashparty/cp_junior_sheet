#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<char>> board(4, vector<char>(4));

    for (int r = 0; r < 4; r++) {
        for (int c = 0; c < 4; c++) {
            cin >> board[r][c];
        }
    }

    bool poss = false;
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            int b = 0;
            int w = 0;

            for (int ro = 0; ro < 2; ro++) {
                for (int co = 0; co < 2; co++) {
                    if (board[r + ro][c + co] == '#')
                        b++;
                    else
                        w++;
                }
            }

            if (b != w) poss = true;
        }
    }

    if (poss)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}