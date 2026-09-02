#include <iostream>
#include <set>
#include <utility>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        int x1, y1, x2, y2;
        cin >> x1 >> y1;
        cin >> x2 >> y2;

        set<pair<int, int>> loc;

        int dx[] = {a, a, -a, -a, b, b, -b, -b};
        int dy[] = {b, -b, b, -b, a, -a, a, -a};

        for (int i = 0; i < 8; i++) {
            loc.insert({x1+dx[i], y1+dy[i]});
        }

        int ans = 0;

        for (int i = 0; i < 8; i++) {
            if (loc.find({x2+dx[i], y2+dy[i]}) != loc.end()) ans++;
        }

        cout << ans / (a==b ? 2 : 1) << '\n';
    }
    return 0;
}