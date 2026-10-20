#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        vector<long long> arr(n);

        for(long long &a: arr){
            cin >> a;
        }

        long long res = 0;

        for(int i=k-1; i<=n-k; i++){
            res += arr[i];
        }

        int l = 0;
        int r = n-1;

        int range = min(k-1, n-k+1);

        for(int i=0; i<range; i++){
            res += max(arr[l], arr[r]);
            l++;
            r--;
        }

        cout << res << "\n";
    }
}