#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int INF = 1e9;

int main()
{
    int X, N;
    cin >> X >> N;

    if (N == 0)
    {
        cout << X << endl;
        return 0;
    }

    vector<int> p(N);
    rep(i, N)
    {
        cin >> p[i];
    }

    if (N == 1)
    {
        int res = abs(X - (p[0] - 1)) <= abs(X - (p[0] + 1)) ? p[0] - 1 : p[0] + 1;
        cout << res << endl;
        return 0;
    }

    sort(p.begin(), p.end());
    int sub = INF;
    rep(i, N - 1)
    {
        if (abs(X - p[i]) < abs(X - p[i + 1]))
        {
            int acnt = p[i] + 1;
            int max_n = INF;
            int j = i + 1;
            while (true)
            {
                if (acnt != p[j])
                {
                    max_n = acnt;
                    break;
                }
                else if (j == N - 1)
                {
                    max_n = p[N - 1] + 1;
                    break;
                }
                else
                {
                    acnt++;
                    j++;
                }
            }

            int scnt = p[i] - 1;
            int min_n = INF;
            int k = i - 1;
            while (true)
            {
                if (scnt != p[k])
                {
                    min_n = scnt;
                    break;
                }
                else if (k == 0)
                {
                    min_n = p[0] - 1;
                    break;
                }
                else
                {
                    scnt--;
                    k--;
                }
            }

            int res = (abs(X - min_n) <= abs(X - max_n)) ? min_n : max_n;
            cout << res << endl;
            return 0;
        }
    }

    if (p[N - 2] != p[N - 1] - 1)
    {
        cout << p[N - 1] - 1 << endl;
    }
    else
    {
        cout << p[N - 1] + 1 << endl;
    }
}
