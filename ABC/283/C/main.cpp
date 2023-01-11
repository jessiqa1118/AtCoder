#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string S;
    cin >> S;

    int cnt = 0;
    rep(i, (int) S.size()) {
        if (S[i] == '0') {
            if (i + 1 < (int) S.size() && S[i + 1] == '0') i++;
        }
        cnt++;
    }

    cout << cnt << endl;
}