#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> arr(n);

        for(auto &x : arr)
            cin >> x;

        vector<int> nextDiff(n, -1);

        for(int i = n - 2; i >= 0; i--) {
            if(arr[i] != arr[i + 1])
                nextDiff[i] = i + 1;
            else
                nextDiff[i] = nextDiff[i + 1];
        }

        int q;
        cin >> q;

        while(q--) {
            int l, r;
            cin >> l >> r;

            l--;
            r--;

            if(nextDiff[l] != -1 && nextDiff[l] <= r)
                cout << l + 1 << " " << nextDiff[l] + 1 << '\n';
            else
                cout << -1 << " " << -1 << '\n';
        }

        cout << '\n';
    }

    return 0;
}