#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<ll> a(n);

        for (auto &x : a)
            cin >> x;

        vector<int> queries(q);

        for (auto &x : queries)
            cin >> x;

        vector<int> useful;
        int mn = 31;

        for (int x : queries) {
            if (x < mn) {
                useful.push_back(x);
                mn = x;
            }
        }

        int p = useful.size();

        vector<ll> add(p);

        add[p - 1] = 1LL << (useful[p - 1] - 1);

        for (int i = p - 2; i >= 0; i--) {
            add[i] = add[i + 1] + (1LL << (useful[i] - 1));
        }

        for (int i = 0; i < n; i++) {
            int l = 0, r = p;

            while (l < r) {
                int mid = l + (r - l) / 2;

                ll val = a[i] % (1LL << useful[mid]);

                if (val != 0)
                    l = mid + 1;
                else
                    r = mid;
            }
            if (l < p)
                a[i] += add[l];
        }

        for (auto x : a)
            cout << x << ' ';

        cout << '\n';
    }

    return 0;
}