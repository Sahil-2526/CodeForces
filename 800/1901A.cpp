#include <iostream>
#include<vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;

        vector<int> arr(n);
        for(auto& a: arr) cin >> a;

        int max_dist = arr[0];
        for(int i=0; i<n-1; i++){
            max_dist = max(max_dist, arr[i+1]-arr[i]);
        }
        max_dist = max(max_dist, 2*(x-arr[n-1]));

        cout << max_dist << "\n";
    }
    return 0;
}