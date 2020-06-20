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

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int MAX_STR = 3000;

int main()
{
    string s, t;
    cin >> s >> t;

    vector<vector<int>> dp(MAX_STR + 1, vector<int>(MAX_STR + 1, 0));

    for (int i = 1; i < s.size() + 1; i++)
    {
        for (int j = 1; j < t.size() + 1; j++)
        {
            if (s[i - 1] == t[j - 1])
            {
                chmax(dp[i][j], dp[i - 1][j - 1] + 1);
            }
            else
            {
                chmax(dp[i][j], dp[i - 1][j]);
                chmax(dp[i][j], dp[i][j - 1]);
            }
        }
    }

    string res = "";
    int i = s.size();
    int j = t.size();
    while (i > 0 && j > 0)
    {
        if (dp[i][j] == dp[i - 1][j])
        {
            --i;
        }
        else if (dp[i][j] == dp[i][j - 1])
        {
            --j;
        }
        else
        {
            res = s[i - 1] + res;
            --i, --j;
        }
    }

    cout << res << endl;
}
