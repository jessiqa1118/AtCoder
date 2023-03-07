#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ll N, M, T;
    cin >> N >> M >> T;

    ll A[N];
    for (int i = 1; i <= N - 1; i++) cin >> A[i];

    vector<int> bonus(N + 1, 0);
    for (int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;
        bonus[x] = y;
    }

    ll cnt = T;
    for (int i = 1; i <= N - 1; i++) {
        if (cnt <= 0) {
            cout << "No" << endl;
            return 0;
        }

        cnt -= A[i];
        cnt += bonus[i];
    }

    cout << "Yes" << endl;
}