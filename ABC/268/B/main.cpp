#include <bits/stdc++.h>

using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    if ((int) S.length() > (int) T.length()) {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 0; i < (int) S.length(); i++) {
        if (S[i] != T[i]) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}