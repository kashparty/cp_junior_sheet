#include <bits/stdc++.h>
using namespace std;

struct operation {
    long long left;
    long long right;
    long long inc;
};

struct query {
    long long start;
    long long end;
};

int main() {
    long long n, m, k;
    cin >> n >> m >> k;

    vector<long long> arr(n);
    for (long long i = 0; i < n; i++) cin >> arr[i];

    vector<operation> ops(m);
    for (long long i = 0; i < m; i++)
        cin >> ops[i].left >> ops[i].right >> ops[i].inc;

    vector<query> queries(k);
    for (long long i = 0; i < k; i++) cin >> queries[i].start >> queries[i].end;

    vector<long long> op_apps(m + 1, 0);
    for (long long i = 0; i < k; i++) {
        op_apps[queries[i].start - 1]++;
        op_apps[queries[i].end]--;
    }

    vector<long long> diffs(n + 1, 0);
    long long count = 0;
    // cout << "DEBUG\n";
    for (long long i = 0; i < m; i++) {
        // cout << op_apps[i] << " ";
        count += op_apps[i];
        diffs[ops[i].left - 1] += ops[i].inc * count;
        diffs[ops[i].right] -= ops[i].inc * count;
    }
    cout << "\n";

    // cout << "END DEBUG\n";
    long long running = 0;
    for (long long i = 0; i < n; i++) {
        running += diffs[i];
        cout << arr[i] + running << " ";
    }

    cout << "\n";
}