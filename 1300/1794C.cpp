#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n);
        for(int &a: arr) cin >> a;

        int p = 0;

        for(int i=0; i<n; i++){
            while(p<i && i-p >= arr[p])
                p++;

            cout << i-p+1 << " ";
        }

        cout << "\n";
    }

    return 0;
}