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
        int n, val;
        cin >> n;

        for(int i=0; i<n; i++)
            cin >> val;

        if(n % 2 == 0){
            cout << "2\n";
            cout << "1 " << n << "\n";
            cout << "1 " << n << "\n";
        }
        else{
            cout << "4\n";
            cout << "1 " << n-1 << "\n";
            cout << "1 " << n-1 << "\n";
            cout << "2 " << n << "\n";
            cout << "2 " << n << "\n";
        }
    }
    return 0;
}