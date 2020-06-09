#include <iostream>
#include <vector>

using namespace std;

template<class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    else
    {
        return false;
    }
}

template<class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    else
    {
        return false;
    }
}

const int INF = 1e9;

int main()
{
    int N, K;
    cin >> N >> K;

    vector<int> h(N), dp(N);
    for (int i = 0; i < N; i++)
    {
        cin >> h[i];
        dp[i] = INF;
    }

    dp[0] = 0;
    for (int i = 0; i < N; i++)
    {
        for (int k = 1; k <= K; k++)
        {
            if (i + k < N)
            {
                chmin(dp[i + k], dp[i] + abs(h[i] - h[i + k]));
            }
        }
    }

    cout << dp[N - 1] << endl;
}
