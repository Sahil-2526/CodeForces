#include <iostream>
#include <set>
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

        ll e_o = 0;
        set<ll> st;
        bool valid = false;

        st.insert(0);

        for(int i = 0; i < n; i++) {
            ll x;
            cin >> x;

            if(i % 2 == 0)
                e_o += x;
            else
                e_o -= x;

            if(st.find(e_o) != st.end()) {
                valid = true;
            }

            st.insert(e_o);
        }

        if(valid)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}