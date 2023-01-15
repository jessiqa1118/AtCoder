#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int a, b;
    cin >> a >> b;

    string ans = (a * 2 == b || (a * 2) + 1 == b) ? "Yes" : "No";
    cout << ans << endl;
}