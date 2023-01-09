#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void test(ll num) {
    ll p, q;

    for (int i = 2; i * i < num; i++) {
        if (num % i != 0) continue;

        if ((num / i) % i == 0) {
            p = i;
            q = num / i / i;
        } else {
            q = i;
            p = (ll) sqrt(num / q);
        }
        break;
    }

    cout << p << " " << q << endl;
}

int main() {
    int T;
    cin >> T;

    ll num[T];
    for (int i = 0; i < T; i++) {
        cin >> num[i];
    }

    for (int i = 0; i < T; i++) test(num[i]);
}
