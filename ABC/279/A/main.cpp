#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    string S;
    cin >> S;

    int cnt = 0;
    for (int i = 0; i < (int)S.length(); i++) {
        if (S[i] == 'v') cnt += 1;
        else if (S[i] == 'w') cnt += 2;
    }

    cout << cnt << endl;
}