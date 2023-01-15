#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string S;
    cin >> S;
    std::reverse(S.begin(), S.end());

    ll ans = 0;
    ll base = 1;
    for (auto c: S) {
        ll num = (c - 'A') + 1;
        ans += num * base;
        base *= 26;
    }

    cout << ans << endl;
}
