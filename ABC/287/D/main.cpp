#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool isMatch(char a, char b) {
    return (a == '?' || b == '?' || a == b);
}

int main() {
    string S, T;
    cin >> S >> T;

    vector<bool> pre(T.size() + 1, false);
    vector<bool> suf(T.size() + 1, false);

    pre[0] = true;
    for (int i = 1; i <= (int) T.size(); i++) {
        if (!isMatch(S[i - 1], T[i - 1])) break;
        pre[i] = true;
    }

    reverse(S.begin(), S.end());
    reverse(T.begin(), T.end());

    suf[0] = true;
    for (int i = 1; i <= (int) T.size(); i++) {
        if (!isMatch(S[i - 1], T[i - 1])) break;
        suf[i] = true;
    }

    for (int x = 0; x <= T.size(); x++) {
        cout << ((pre[x] && suf[T.size()-x]) ? "Yes" : "No") << endl;
    }
}