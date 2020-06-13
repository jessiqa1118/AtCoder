#include <iostream>
#include <vector>

using namespace std;

template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return true;
    }

    return false;
}

int main()
{
    int N;
    long long W;
    cin >> N >> W;

    vector<long long> w(N), v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> w[i] >> v[i];
    }

    vector<vector<long long>> dp(N, vector<long long>(W + 1, 0));

    for (int j = 0; j <= W; j++)
    {
        dp[0][j] = (j >= w[0]) ? v[0] : dp[0][j];
    }

    for (int i = 1; i < N; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            if (j + w[i] <= W)
            {
                chmax(dp[i][j + w[i]], dp[i - 1][j] + v[i]);
            }

            chmax(dp[i][j], dp[i - 1][j]);
        }
    }

    cout << dp[N - 1][W] << endl;
}
