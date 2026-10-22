#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;

        vector<vector<int>> arr(m, vector<int>(n));

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> arr[j][i];
            }
        }

        for(int i=0; i<m; i++){
            sort(arr[i].begin(), arr[i].end());
        }

        long long res = 0;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                res += 1LL*arr[i][j]*(2*j-n+1);
            }
        }

        cout << res << "\n";
    }

    return 0;
}