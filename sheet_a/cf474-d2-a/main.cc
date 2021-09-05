#include <bits/stdc++.h>
using namespace std;

int main() {
    string r1, r2, r3;
    r1 = "qwertyuiop";
    r2 = "asdfghjkl;";
    r3 = "zxcvbnm,./";

    char dir;
    cin >> dir;

    string cipher;
    cin >> cipher;

    for (char x : cipher) {
        int shift = dir == 'R' ? -1 : 1;
        if (find(r1.begin(), r1.end(), x) != r1.end()) {
            cout << *(find(r1.begin(), r1.end(), x) + shift);
        } else if (find(r2.begin(), r2.end(), x) != r2.end()) {
            cout << *(find(r2.begin(), r2.end(), x) + shift);
        } else {
            cout << *(find(r3.begin(), r3.end(), x) + shift);
        }
    }

    cout << "\n";
}
