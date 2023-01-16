#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ll N, K;
    cin >> N >> K;

    ll A[N], B[N];
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < N; i++) cin >> B[i];

    long long cnt = 0;
    for (int i = 0; i < N; i++) cnt += abs(A[i] - B[i]);

    if ((cnt > K) || (cnt % 2 != K % 2)) {
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;
}