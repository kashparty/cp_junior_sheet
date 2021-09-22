#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 2 == 0)
        cout << "-1\n";
    else {
        vector<int> a(n);
        vector<int> b(n);
        vector<int> c(n);
        for (int i = 0; i < n; i++) a[i] = i;
        for (int i = 0; i < n; i++) b[(i + (n + 1) / 2) % n] = i;
        for (int i = 0; i < n; i++) c[i] = (a[i] + b[i]) % n;

        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << "\n";
        for (int i = 0; i < n; i++) cout << b[i] << " ";
        cout << "\n";
        for (int i = 0; i < n; i++) cout << c[i] << " ";
        cout << "\n";
    }
}