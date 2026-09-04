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

        vector<int> arr(n);
        for (auto &a : arr)
            cin >> a;

        vector<int> a;
        vector<vector<int>> parr;

        for (int i = 0; i < n - 1; i++) {
            a.push_back(arr[i]);

            if ((arr[i] % 2 == 0 && arr[i + 1] % 2 != 0) ||
                (arr[i] % 2 != 0 && arr[i + 1] % 2 == 0)) {
                continue;
            }

            parr.push_back(a);
            a.clear();
        }

        a.push_back(arr[n - 1]);
        parr.push_back(a);

        ll res = -1e18;

        for (int i = 0; i < parr.size(); i++) {
            ll sum = 0;

            for (int j = 0; j < parr[i].size(); j++) {
                sum += parr[i][j];
                res = max(res, sum);

                if (sum < 0)
                    sum = 0;
            }
        }

        cout << res << '\n';
    }

    return 0;
}

// OPTIMAL SOLUTION space O(n) to O(1)

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         long long ans = -1e18;
//         long long sum = 0;
//         int prev;
//         for (int i = 0; i < n; i++) {
//             int x;
//             cin >> x;
//             if (i == 0 || (x % 2 == prev % 2)) {
//                 sum = x;
//             } else {
//                 sum = max((long long)x, sum + x); // KADANE'S ALGORITHM
//             }
//             ans = max(ans, sum);
//             prev = x;
//         }
//         cout << ans << '\n';
//     }
// }