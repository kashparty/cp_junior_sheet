#include <bits/stdc++.h>
using namespace std;

int main() {
    string on_pan, off_pan;
    cin >> on_pan >> off_pan;

    string left, right;
    bool on_right = false;
    for (char c : on_pan) {
        if (c == '|')
            on_right = true;
        else if (on_right)
            right += c;
        else
            left += c;
    }

    int total_size = left.size() + right.size() + off_pan.size();
    if (total_size % 2 == 1)
        cout << "Impossible\n";
    else {
        if (left.size() > total_size / 2 || right.size() > total_size / 2)
            cout << "Impossible\n";
        else {
            for (char c : off_pan) {
                if (left.size() < total_size / 2)
                    left += c;
                else
                    right += c;
            }

            cout << left << "|" << right << "\n";
        }
    }
    return 0;
}