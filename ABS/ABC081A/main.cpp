#include <bits/stdc++.h>

using namespace std;

int main() {
    string S;
    cin >> S;

    int cnt = 0;
    for (int i = 0; i < S.length(); i++)
    {
        cnt += (S.substr(i, 1) == "1") ? 1 : 0;
    }

    cout << cnt << endl;
}