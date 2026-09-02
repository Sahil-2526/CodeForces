#include<iostream>
#include<vector>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll a, b;
        int n;
        cin >> a >> b >> n;

        ll res = b;
        for(int i=0; i<n; i++){
            ll x;
            cin >> x;
            res += min(x, a-1);
        }

        cout << res << "\n";
    }
    return 0;
}