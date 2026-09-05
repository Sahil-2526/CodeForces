#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef long long ll;
typedef vector<pair<ll, int>> vpli;

vpli top3(const vector<ll>& v) {
    vpli top;

    for (int i = 0; i < (int)v.size(); i++) {
        top.push_back({v[i], i});
    }

    sort(top.rbegin(), top.rend());

    if (top.size() > 3)
        top.resize(3);

    return top;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<ll> a(n), b(n), c(n);

        for (auto &x : a) cin >> x;
        for (auto &x : b) cin >> x;
        for (auto &x : c) cin >> x;

        vpli A = top3(a);
        vpli B = top3(b);
        vpli C = top3(c);

        ll ans = 0;

        for (auto [va, ia] : A) {
            for (auto [vb, ib] : B) {
                for (auto [vc, ic] : C) {
                    if (ia != ib && ib != ic && ia != ic) {
                        ans = max(ans, va + vb + vc);
                    }
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}