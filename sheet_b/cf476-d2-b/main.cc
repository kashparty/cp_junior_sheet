#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    int ans = 1;
    for (int i = 2; i <= n; i++) ans *= i;
    return ans;
}

int choose(int n, int r) {
    if (n >= 0 && r >= 0 && r <= n)
        return factorial(n) / (factorial(r) * factorial(n - r));
    return 0;
}

int main() {
    string a, b;
    cin >> a >> b;

    int expected_p_count = 0;
    int received_p_count = 0;
    int unsures = 0;
    for (char x : a) {
        if (x == '+') expected_p_count++;
    }
    for (char x : b) {
        if (x == '+')
            received_p_count++;
        else if (x == '?')
            unsures++;
    }

    double possible = (double)(1 << unsures);
    int diff = expected_p_count - received_p_count;
    double probability = choose(unsures, diff) / possible;

    cout << fixed << setprecision(12) << probability << "\n";
}