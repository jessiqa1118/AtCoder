#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ll max = 998244353;

    ll A, B, C, D, E, F;
    cin >> A >> B >> C >> D >> E >> F;
    A %= max;
    B %= max;
    C %= max;
    D %= max;
    E %= max;
    F %= max;

    ll ans1 = (((A * B) % max) * C) % max;
    ll ans2 = (((D * E) % max) * F) % max;

    cout << ((ans1+max) - ans2) % max << endl;
}