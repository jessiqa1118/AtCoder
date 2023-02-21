#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    string X;
    int K;
    cin >> X >> K;

    if ((int) X.size() < K) {
        cout << 0 << endl;
        return 0;
    }

    reverse(X.begin(), X.end());

    string ans = "";
    int carry = 0;
    for (int i = 0; i < K; i++) {
        ans += '0';

        int value = (int) (X[i] - '0') + carry;
        carry = (value >= 5) ? 1 : 0;
    }

    for (int i = K; i < (int) X.size(); i++) {
        int value = (int) (X[i] - '0') + carry;
        carry = value / 10;
        ans += (char) (value % 10) + '0';
    }

    if (carry > 0) ans += (char) carry + '0';

    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}