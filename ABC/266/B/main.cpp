#include <bits/stdc++.h>

using namespace std;

#define ll long long
const int BASE = 998244353;

int main() {
    ll N;
    cin >> N;

    ll x = N % BASE;
    cout << ((x >= 0) ? x : x + BASE) << endl;
}
