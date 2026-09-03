#include <iostream> 
#include<vector> 
using namespace std; 
 
int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    cout.tie(nullptr); 
 
    int t; 
    cin >> t; 
    while(t--){ 
        int n, k; 
        cin >> n >> k; 
 
        int val = k; 
        int even = 0;
 
        for(int i = 0; i < n; i++){ 
            int x; 
            cin >> x; 
            
            if(x % 2 == 0)
                even++;
            
            x = x % k; 
            if(x > 0) x = k - x; 
            val = min(val, x);  
        } 
        
        if(k == 4)
            val = min(val, max(0, 2 - even));
 
        cout << val << "\n"; 
    } 
    return 0; 
}