#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long> amb(n);

        for(long long &a : amb){
            cin >> a;
        }

        for(int i=0; i<n; i++){
            int a;
            cin >> a;
            amb[i] -= a;
        }

        long long count = 0;
        vector<int> strongV;

        long long maxm = *max_element(amb.begin(), amb.end());

        for(int i=0; i<n; i++){
            if(amb[i] == maxm){
                count++;
                strongV.push_back(i+1);
            }
        }

        cout << count << "\n";

        for(int i=0; i<strongV.size(); i++){
            cout << strongV[i] << " ";
        }

        cout << "\n";
    }

    return 0;
}