#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    vector<int> diff(n - 1);
    for (int i = 1; i < n; i++) diff[i - 1] = a[i] - a[i - 1];

    int start = -1;
    int end = -1;
    for (int i = 0; i < n - 1; i++) {
        if (diff[i] < 0) {
            if (end != -1) {
                cout << "no\n";
                return 0;
            }

            if (start == -1) start = i;
        }

        if (diff[i] > 0 && start != -1 && end == -1) end = i + 1;
    }

    if (start == -1 && end == -1) {
        cout << "yes\n1 1\n";
        return 0;
    }
    if (start == -1) start = 0;
    if (end == -1) end = n;

    // cout << start << " " << end << "\n";
    
    sort(b.begin(), b.end());
    reverse(a.begin() + start, a.begin() + end);

    if (a == b) cout << "yes\n" << start + 1 << " " << end << "\n";
    else cout << "no\n";
}