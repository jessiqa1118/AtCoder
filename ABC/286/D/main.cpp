#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int N, X;
    cin >> N >> X;

    int A[N], B[N];
    for (int i = 0; i < N; i++) cin >> A[i] >> B[i];

    bool dp[N + 1][X + 1];
    for (int i = 0; i < N + 1; i++) {
        for (int j = 0; j < X + 1; j++) {
            dp[i][j] = (j == 0);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < X + 1; j++) {
            for (int k = 0; k <= B[i]; k++) {
                int rest = j - k * A[i];
                if (rest >= 0 && dp[i][rest]) dp[i + 1][j] = true;
            }
        }
    }

    cout << (dp[N][X] ? "Yes" : "No") << endl;
}