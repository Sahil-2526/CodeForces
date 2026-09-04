#include <iostream>
#include <vector>
#include <climits>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<ll> nums(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            cin >> nums[i];
            nums[i] += nums[i - 1];
        }

        ll res = 0;

        for (int len = 1; len <= n; len++) {
            if (n % len != 0) continue;
            ll mx = LLONG_MIN;
            ll mn = LLONG_MAX;

            for (int l = 0; l + len <= n; l += len) {
                ll sum = nums[l + len] - nums[l];

                mx = max(mx, sum);
                mn = min(mn, sum);
            }

            res = max(res, mx - mn);
        }

        cout << res << '\n';
    }

    return 0;
}