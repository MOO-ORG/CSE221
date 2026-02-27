#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    while (q--) {
        long long x, y;
        cin >> x >> y;

        int left = lower_bound(a.begin(), a.end(), x) - a.begin();
        int right = upper_bound(a.begin(), a.end(), y) - a.begin();

        cout << right - left << "\n";
    }

    return 0;
}