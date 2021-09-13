#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    bool valid = false;
    for (int i = a.size() - 1; i >= 2; i--) {
        if (a[i] < a[i - 1] + a[i - 2]) {
            valid = true;
        }
    }

    if (valid)
        cout << "YES\n";
    else
        cout << "NO\n";
}