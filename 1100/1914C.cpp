#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n);

        for(int i = 0; i < n; i++)
            cin >> a[i];

        for(int i = 0; i < n; i++)
            cin >> b[i];

        ll res = 0;
        ll val = 0;
        ll max_subseq = 0;

        for(int i = 0; i < min(n, k); i++) {
            val += a[i];
            max_subseq = max(max_subseq, 1LL * b[i]);

            res = max(res, val + 1LL * (k - i - 1) * max_subseq);
        }

        cout << res << '\n';
    }

    return 0;
}