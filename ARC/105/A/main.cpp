#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    vector<ll> cookie(4);
    for (int i = 0; i < 4; i++) cin >> cookie[i];
    sort(cookie.begin(), cookie.end());

    string ans = (cookie[0] + cookie[3] == cookie[1] + cookie[2] || cookie[0] + cookie[1] + cookie[2] == cookie[3])
                 ? "Yes" : "No";
    cout << ans << endl;
}