#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        unordered_map<int, int> mp;
        long long res = 0;
        for(int i=0; i<n; i++){
            int a;
            cin >> a;
            a -= i;
            res += mp[a];
            mp[a]++;
        }

        cout << res << "\n";
    }
}