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

    while (t--) {
        int n;
        cin >> n;

        vector<ll> num(n);
        for (auto &a : num)
            cin >> a;

        vector<ll> nums = num;
        sort(nums.begin(), nums.end());

        vector<ll> ps(n);
        ps[0] = nums[0];

        for (int i = 1; i < n; i++)
            ps[i] = ps[i - 1] + nums[i];

        vector<int> res(n);
        int val = n - 1;

        res[n - 1] = n - 1;

        for (int i = n - 2; i >= 0; i--) {
            if (ps[i] < nums[i + 1])
                val = i;

            res[i] = val;
        }

        for (int i = 0; i < n; i++) {
            int idx = lower_bound(nums.begin(), nums.end(), num[i]) - nums.begin();
            cout << res[idx];

            if (i != n - 1)
                cout << " ";
        }

        cout << '\n';
    }

    return 0;
}