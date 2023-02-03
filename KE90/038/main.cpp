#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll gcd(ll a, ll b) {
    ll r = a % b;

    while (r != 0) {
        a = b;
        b = r;
        r = a % b;
    }

    return b;
}

int main() {
    ll max = [] {
        ll val = 1;
        for (int i = 1; i <= 18; i++) val *= 10;
        return val;
    }();

    ll A, B;
    cin >> A >> B;

    ll bg = B / gcd(A, B);
    cout << ((bg > max / A) ? "Large" : to_string(A * bg)) << endl;
}