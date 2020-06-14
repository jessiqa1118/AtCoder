#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

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

    vector<int> A(N);
    int a_max = 0;
    rep(i, N)
    {
        cin >> A[i];
        chmax(a_max, A[i]);
    }

    sort(A.begin(), A.end());

    vector<bool> dp(a_max + 1, true);
    rep(i, N)
    {
        if ((i > 0) && (A[i] == A[i - 1]))
        {
            dp[A[i]] = false;
        }

        if (dp[A[i]])
        {
            int a = A[i] * 2;
            while (a <= a_max)
            {
                dp[a] = false;
                a += A[i];
            }
        }
    }

    int cnt = 0;
    rep(i, N)
    {
        if (dp[A[i]])
        {
            cnt++;
        }
    }

    cout << cnt << endl;
}
