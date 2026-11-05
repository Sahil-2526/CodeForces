#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

typedef pair<int, int> pii;


pii digzero(long long n){
    int zero = 0;
    int dig = 0;
    bool z = true;

    while(n){
        int l = n%10;
        if(l>0) z=false;
        if(z) zero++;
        dig++;
        n/=10;
    }
    return {zero, dig};
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        multiset<pii> num;

        for(int i=0; i<n; i++){
            long long x;
            cin >> x;
            num.insert(digzero(x));
        }

        for(int i=0; i<2*n-1; i++){
            if(i%2 == 0){
                pii a = *prev(num.end());
                num.erase(prev(num.end()));
                num.insert({0, a.second-a.first});
            }
            else{
                pii a = *num.begin();
                num.erase(num.begin());

                pii b = *prev(num.end());
                num.erase(prev(num.end()));

                num.insert({a.first, a.second+b.second});
            }
        }

        if(num.begin()->second <= m) cout << "Anna\n";
        else cout << "Sasha\n";
    }
}