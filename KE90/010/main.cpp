#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;

    int sum1[N + 1], sum2[N + 1];
    sum1[0] = 0, sum2[0] = 0;
    for (int i = 1; i < N + 1; i++) {
        int c, p;
        cin >> c >> p;

        if (c == 1) {
            sum1[i] = sum1[i - 1] + p;
            sum2[i] = sum2[i - 1];
        }
        if (c == 2) {
            sum2[i] = sum2[i - 1] + p;
            sum1[i] = sum1[i - 1];
        }
    }

    int Q;
    cin >> Q;

    rep (j, Q) {
        int l, r;
        cin >> l >> r;
        cout << sum1[r] - sum1[l - 1] << " " << sum2[r] - sum2[l - 1] << endl;
    }
}