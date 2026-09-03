#include <iostream>
#include<set>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        ll res = 0;
        set<char> st;
        
        for(auto& x: s){
            st.insert(x);
            res += (1LL * st.size());
        }

        cout << res << "\n";
    }
    return 0;
}