#include <iostream>
#include<vector>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        vector<ll> arr(n);
        for(auto& x: arr) cin >> x;

        if(k > 1){
            cout << "YES\n";
            continue;
        }
        bool non_d = true;
        for(int i=0; i<n-1; i++){
            if(arr[i] > arr[i+1]){
                non_d = false;
                break;
            }
        }
        if(non_d) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}