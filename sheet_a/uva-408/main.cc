#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}

int main() {
    int step, mod;
    while (cin >> step >> mod) {
        int step_length = to_string(step).length();
        int mod_length = to_string(mod).length();

        for (int i = 0; i < 10 - step_length; i++) cout << " ";
        cout << step;
        for (int i = 0; i < 10 - mod_length; i++) cout << " ";
        cout << mod;

        if (gcd(step, mod) == 1) cout << "    Good Choice";
        else cout << "    Bad Choice";

        cout << "\n\n";
    }

    return 0;
}
