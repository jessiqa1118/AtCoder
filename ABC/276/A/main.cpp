#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    string S;
    cin >> S;

    for (int i = (int) S.length(); i >= 0; i--) {
        if (S[i] == 'a') {
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;
}