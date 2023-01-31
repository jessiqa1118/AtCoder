#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ll N, Q;
    cin >> N >> Q;

    set<pair<ll, ll>> follow;
    for (int i = 0; i < Q; i++) {
        int t;
        ll a, b;
        cin >> t >> a >> b;

        switch (t) {
            case 1:
                follow.insert({a, b});
                break;
            case 2:
                follow.erase({a, b});
                break;
            case 3:
                cout << (follow.count({a, b}) && follow.count({b, a}) ? "Yes" : "No") << endl;
                break;
            default:
                break;
        }
    }
}