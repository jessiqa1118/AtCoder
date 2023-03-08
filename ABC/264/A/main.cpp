#include <bits/stdc++.h>

using namespace std;

int main() {
    int L, R;
    cin >> L >> R;

    string s = "atcoder";
    for (int i = L; i <= R; i++) {
        cout << s[i - 1];
    }

    cout << endl;
}