#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    int M;
    cin >> M;

    vector<int> B(M);
    for (int i = 0; i < M; i++) cin >> B[i];

    int X;
    cin >> X;

    vector<bool> dp(X + 1), trap(X + 1, false);
    for (int i = 0; i < M; i++) trap[B[i]] = true;

    dp[0] = true;
    for (int i = 0; i <= X; i++) {
        if (trap[i]) {
            dp[i] = false;
            continue;
        }

        for (auto a: A) {
            if (i >= a) dp[i] = dp[i] || dp[i - a];
        }
    }

    cout << (dp[X] ? "Yes" : "No") << endl;
}