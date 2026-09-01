#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

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
        for(int i=0; i<n; i++){
            char a;
            cin >> a;
            s += a;
        }

        vector<int> arr;
        int count = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '.') count++;
            else{
                arr.push_back(count);
                count = 0;
            }
        }
        if(count != 0) arr.push_back(count);

        if(arr.size() == 0){
            cout << "0\n";
            continue;
        }
        int max_elem = *max_element(arr.begin(), arr.end());
        if(max_elem > 2){
            cout << "2\n";
            continue;
        }
        cout << accumulate(arr.begin(), arr.end(), 0) << "\n";
    }
    return 0;
}