#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> arr(n);
        for(long long &a: arr){
            cin >> a;
        }
        if(n <= 2){
            if(n==2 && arr[0]==arr[1]) n--;
            cout << n << "\n";
            continue;
        }
        int i=0, j=1, del=0;
        while(1){
            j++;
            if(j >= n){
                if(n-del == 2 && arr[i]==arr[j-1]) del++; 
                cout << n-del << "\n";
                break;
            }
            if((arr[i] <= arr[j-1] && arr[j-1] <= arr[j]) ||
               (arr[i] >= arr[j-1] && arr[j-1] >= arr[j])){
                del++;
            }
            else{
                i = j-1;
            }
        }
    }
}