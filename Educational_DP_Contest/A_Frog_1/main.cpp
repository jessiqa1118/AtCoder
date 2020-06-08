#include <iostream>
#include <vector>

using namespace std;

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
    cin >> N;

    vector<int> h(N);
    vector<int> dp(N);
    for (int i = 0; i < N; i++)
    {
        cin >> h[i];
    }

    dp[0] = 0;
    dp[1] = dp[0] + abs(h[0] - h[1]);
    for (int i = 0; i < N; i++)
    {
        if (i + 2 < N)
        {
            dp[i + 2] = dp[i] + abs(h[i] - h[i + 2]);
        }

        if (i + 1 < N)
        {
            chmin(dp[i + 1], dp[i] + abs(h[i] - h[i + 1]));
        }
    }
    cout << dp[N - 1] << endl;
}
