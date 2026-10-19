#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, q;
        cin >> n >> q;

        vector<long long> arr(n);
        for(long long &a : arr){
            cin >> a;
        }

        vector<long long> qarr(q);
        for(long long &a : qarr){
            cin >> a;
        }

        vector<long long> ps(n+1);
        ps[0] = 0;

        for(int i = 1; i <= n; i++){
            ps[i] = ps[i-1] + arr[i-1];
        }

        vector<long long> maxm(n);

        maxm[0] = arr[0];

        for(int i = 1; i < n; i++){
            maxm[i] = max(maxm[i-1], arr[i]);
        }

        for(int i = 0; i < q; i++){
            int idx = upper_bound(maxm.begin(), maxm.end(), qarr[i]) - maxm.begin();
            cout << ps[idx] << " ";
        }

        cout << "\n";
    }

    return 0;
}