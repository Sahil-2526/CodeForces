#include <iostream>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n, k;
        ll x;
        cin >> n >> k >> x;

        ll mn = 1LL * k * (k + 1) / 2;
        ll mx = 1LL * k * (2LL * n - k + 1) / 2;

        if(x >= mn && x <= mx)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}