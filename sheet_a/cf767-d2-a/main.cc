#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    priority_queue<int> snacks;
    int current_required = n;

    for (int i = 0; i < n; i++) {
        int next;
        cin >> next;

        snacks.push(next);
        while (!snacks.empty() && snacks.top() == current_required) {
            cout << current_required << " ";
            current_required--;
            snacks.pop();
        }

        cout << "\n";
    }
}
