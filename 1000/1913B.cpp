#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int zeros = 0, ones = 0;

        for (char c : s) {
            if (c == '0') zeros++;
            else ones++;
        }

        int i = 0;

        for (; i < s.size(); i++) {
            if (s[i] == '0') {
                if (ones == 0) break;
                ones--;
            } else {
                if (zeros == 0) break;
                zeros--;
            }
        }

        cout << s.size() - i << '\n';
    }
    return 0;
}