#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}

const long long INF = 1LL << 60;
const int MAX_V = pow(10, 3) * 100 + 1;

int main()
{
    int N;
    long long W;
    cin >> N >> W;

    vector<long long> w(N), v(N);
    rep(i, N)
    {
        cin >> w[i] >> v[i];
    }

    vector<vector<long long>> dp(N, vector<long long>(MAX_V + 1, INF));

    dp[0][0] = 0;
    for (int j = 1; j <= v[0]; j++)
    {
        dp[0][j] = w[0];
    }

    for (int i = 1; i < N; i++)
    {
        rep(j, MAX_V + 1)
        {
            chmin(dp[i][j], dp[i - 1][j]);

            if (j - v[i] >= 0)
            {
                chmin(dp[i][j], dp[i - 1][j - v[i]] + w[i]);
            }
        }
    }

    long long res = 0;
    rep(j, MAX_V + 1)
    {
        if (dp[N - 1][j] <= W)
        {
            res = j;
        }
    }
    cout << res << endl;
}
