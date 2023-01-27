#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    string S, T;
    cin >> S >> T;

    for (int i = 0; i < (int) S.length(); i++) {
        if (S.substr(i, (int)T.length()) == T) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
}