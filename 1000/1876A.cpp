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
        int n, p;
        cin >> n >> p;

        vector<pair<int, int>> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i].first;

        for (int i = 0; i < n; i++)
            cin >> arr[i].second;

        sort(arr.begin(), arr.end(), [](auto x, auto y) {
            return x.second < y.second;
        });

        ll ans = p;
        int rem = n - 1;

        for (int i = 0; i < n && rem > 0; i++) {
            if (arr[i].second >= p) {
                ans += 1LL * rem * p;
                rem = 0;
                break;
            }
            int cnt = min(rem, arr[i].first);
            ans += 1LL * cnt * arr[i].second;
            rem -= cnt;
        }

        cout << ans << '\n';
    }

    return 0;
}