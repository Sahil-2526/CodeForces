#include <iostream>
#include <vector>
#include <map>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> arr(n);

        for (int &a : arr)
            cin >> a;

        map<pair<int, int>, ll> ar;

        ll res = 0;

        for (int i = 0; i < n; i++) {
            int x2 = arr[i] % x;
            int y2 = arr[i] % y;

            int needX = (x - x2) % x;

            res += ar[{needX, y2}];

            ar[{x2, y2}]++;
        }

        cout << res << '\n';
    }

    return 0;
}