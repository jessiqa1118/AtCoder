#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    string S, T;
    cin >> S >> T;

    for (int x = 0; x < (int) T.length() + 1; x++) {
        string s = S.substr(0, x);
        s += S.substr((int) S.length() - ((int) T.length() - x), (int) T.length() - x);

        bool isMatch = true;
        for (int i = 0; i < T.length(); i++) {
            if (T[i] == '?' || s[i] == '?') continue;

            if (T[i] != s[i]) {
                isMatch = false;
                break;
            }
        }

        cout << ((isMatch) ? "Yes" : "No") << endl;
    }
}