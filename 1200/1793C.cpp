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
        for(int &a: arr){
            cin >> a;
        }

        int minm = 1, maxm = n;
        int i = 0, j = n-1;
        while(1){
            bool changed = false;
            if(arr[i] == minm){
                i++;
                minm++;
                changed = true;
            }
            else if(arr[i] == maxm){
                i++;
                maxm--;
                changed = true;
            }

            if(arr[j] == minm){
                j--;
                minm++;
                changed = true;
            }
            else if(arr[j] == maxm){
                j--;
                maxm--;
                changed = true;
            }

            if(j-i <= 1){
                cout << "-1" << "\n";
                break;
            }
            if(changed == false){
                cout << i+1 << " " << j+1 << "\n";
                break;
            }
        }
    }
    return 0;
}