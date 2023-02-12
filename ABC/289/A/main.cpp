#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < (int)s.length(); i++) {
        cout << ((s[i] == '0') ? '1' : '0');
    }

    cout << endl;
}