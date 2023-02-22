#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll pow10(int n) {
    ll p = 1;
    for (int i = 0; i < n; i++) {
        p *= 10;
    }

    return p;
}

int main() {
    ll X;
    int K;
    cin >> X >> K;

    int carry = 0;
    for (int i = 0; i <= K; i++) {
        X /= pow10(i);
        X += carry;
        carry = ((X % 10) >= 5) ? 1 : 0;
        X *= pow10(i);
    }

    cout << X << endl;
}