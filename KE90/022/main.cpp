#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll gcd(ll a, ll b) {
    ll q = a / b;
    ll r = a % b;

    while (r != 0) {
        a = b;
        b = r;
        q = a / b;
        r = a % b;
    }

    return b;
}

int main() {
    ll A, B, C;
    cin >> A >> B >> C;

    ll r = gcd(A, gcd(B, C));
    cout << (A / r - 1) + (B / r - 1) + (C / r - 1) << endl;
}