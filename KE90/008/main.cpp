#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ll mod = 1;
    rep(i, 9) mod *= 10;
    mod += 7;

    int N;
    cin >> N;

    string S;
    cin >> S;

    int dp[8][N + 1];
    for (int i = 0; i < 8; i++)dp[i][0] = 0;
    for (int j = 0; j < N + 1; j++) dp[0][j] = 1;

    for (int i = 1; i < 8; i++) {
        for (int j = 1; j < N + 1; j++) {
            dp[i][j] = dp[i][j - 1];
            if (i == 1 && S[j - 1] == 'a') dp[i][j] += dp[i - 1][j - 1];
            if (i == 2 && S[j - 1] == 't') dp[i][j] += dp[i - 1][j - 1];
            if (i == 3 && S[j - 1] == 'c') dp[i][j] += dp[i - 1][j - 1];
            if (i == 4 && S[j - 1] == 'o') dp[i][j] += dp[i - 1][j - 1];
            if (i == 5 && S[j - 1] == 'd') dp[i][j] += dp[i - 1][j - 1];
            if (i == 6 && S[j - 1] == 'e') dp[i][j] += dp[i - 1][j - 1];
            if (i == 7 && S[j - 1] == 'r') dp[i][j] += dp[i - 1][j - 1];
        }
        for (int j = 1; j < N + 1; j++) dp[i][j] %= mod;
    }
}