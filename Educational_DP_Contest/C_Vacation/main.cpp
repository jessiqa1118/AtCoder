#include <iostream>
#include <vector>
#include <algorithm>

template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    else
    {
        false;
    }
}

template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    else
    {
        false;
    }
}

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<vector<int>> input(N, vector<int>(3));
    vector<vector<int>> dp(N, vector<int>(3, 0));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> input[i][j];
            dp[i][j] = 0;
        }
    }

    // First day
    for (int j = 0; j < 3; j++)
    {
        dp[0][j] = input[0][j];
    }

    // After second day
    for (int i = 1; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (j != k)
                {
                    chmax(dp[i][j], dp[i - 1][k] + input[i][j]);
                }
            }
        }
    }

    cout << max({dp[N - 1][0], dp[N - 1][1], dp[N - 1][2]}) << endl;
}
