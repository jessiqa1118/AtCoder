#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int K;
    cin >> K;

    char str = 'A';
    rep(i, K) {
        cout << str++;
    }

    cout << endl;
}