#include <iostream>
using namespace std;
 
typedef unsigned long long ll;
ll mod = 998244353;
 
pair<int, ll> solve(string &s, bool zero) {
    int n = s.length();
    int i = 0;
    int d = 0;
    ll ways = 1;
 
    while(i < n) {
        int c = 0;
 
        if(zero) {
            while(i < n && s[i] == '1') {
                c++;
                i++;
            }
            zero = false;
        }
        else {
            while(i < n && s[i] == '0') {
                c++;
                i++;
            }
            zero = true;
        }
 
        if(c > 0) {
            d += c - 1;
            ways = (ways*c)%mod;
        }
    }
 
    for(int i = 2; i <= d; i++)
        ways = (ways*i)%mod;
 
    return {d, ways};
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--) {
        string s;
        cin >> s;
 
        pair<int, ll> p1 = solve(s, true);
        pair<int, ll> p2 = solve(s, false);
 
        if(p1.first < p2.first)
            cout << p1.first << " " << p1.second << "\n";
        else
            cout << p2.first << " " << p2.second << "\n";
    }
 
    return 0;
}

// OPTIMIZED CODE
// #include <iostream>
// using namespace std;

// using ll = long long;
// const ll MOD = 998244353;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--) {
//         string s;
//         cin >> s;

//         int n = s.size();
//         int d = 0;
//         ll ways = 1;

//         for (int i = 0; i < n; ) {
//             int j = i;

//             while (j < n && s[j] == s[i])
//                 j++;

//             int len = j - i;

//             d += len - 1;
//             ways = ways * len % MOD;

//             i = j;
//         }

//         for (int i = 2; i <= d; i++)
//             ways = ways * i % MOD;

//         cout << d << ' ' << ways << '\n';
//     }

//     return 0;
// }