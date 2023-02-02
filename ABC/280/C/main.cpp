#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    string S, T;
    cin >> S >> T;

    for (int i = 0; i < (int) S.length(); i++) {
        if (S[i] != T[i]) {
            cout << i + 1 << endl;
            return 0;
        }
    };

    cout << (int) T.length() << endl;
}