#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        int k = 2;
        bool valid = false;
        while(1){
            long long init = 1 + k + k*k;
            if(init > n) break;
            int i=3;
            while(init < n){
                init += pow(k, i);
                i++;
            }
            if(init == n){
                valid = true;
                break;
            }
            k++;
        }
        if(valid) cout << "YES\n";
        else cout << "NO\n";
    }
}