#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int INF = 1e9;
const int N_MAX = 100;
const int X_MAX = 100;

using P = pair<int, int>;

int main()
{
    int X, N;
    cin >> X >> N;

    int p;
    vector<bool> f(X_MAX + 1, true);
    rep(i, N)
    {
        cin >> p;
        f[p] = false;
    }

    if (N == 0)
    {
        cout << X << endl;
        return 0;
    }

    P ans(INF, -1);
    rep(x, X_MAX + 2)
    {
        if (f[x])
        {
            ans = min(ans, P(abs(X - x), x));
        }
    }

    cout << ans.second << endl;
}
