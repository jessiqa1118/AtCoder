#include <bits/stdc++.h>

using namespace std;

#define ll long long

string rotate(string s, int offset) {
    string res = "";
    for (int i = offset; i < (int) s.length(); i++) {
        res += s[i];
    }

    for (int i = 0; i < offset; i++) {
        res += s[i];
    }

    return res;
}

int main() {
    int N;
    ll A, B;
    cin >> N >> A >> B;

    string S;
    cin >> S;

    ll ans = LONG_LONG_MAX;
    for (int i = 0; i < N; i++) {
        ll cost = A * i;
        string s = rotate(S, i);
        for (int j = 0; j < (N / 2); j++) {
            if (s[j] != s[((int) s.length() - 1) - j]) cost += B;
        }

        ans = min(ans, cost);
    }

    cout << ans << endl;
}