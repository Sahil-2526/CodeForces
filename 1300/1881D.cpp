#include <iostream>
#include <unordered_map>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        unordered_map<ll, ll> mp;

        for(int i = 0; i < n; i++) {
            ll x;
            cin >> x;

            for(ll j = 2; j * j <= x; j++) {
                while(x % j == 0) {
                    mp[j]++;
                    x /= j;
                }
            }
            if(x > 1)
                mp[x]++;
        }

        bool valid = true;

        for(auto X : mp) {
            if(X.second % n != 0) {
                valid = false;
                break;
            }
        }

        cout << (valid ? "YES\n" : "NO\n");
    }

    return 0;
}