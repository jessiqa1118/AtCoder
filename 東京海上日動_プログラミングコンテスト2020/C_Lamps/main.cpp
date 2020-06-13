#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int N, K;
    cin >> N >> K;

    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    rep(k, K)
    {
        bool countStop = true;
        vector<int> B(N, 0);
        rep(i, N)
        {
            int l = max(0, i - A[i]);
            int r = min(N - 1, i + A[i]);
            B[l]++;

            if (r + 1 < N)
            {
                B[r + 1]--;
            }
        }

        A[0] = B[0];
        for (int i = 1; i < N; i++)
        {
            B[i] += B[i - 1];
            A[i] = B[i];
            if (A[i] != N)
            {
                countStop = false;
            }
        }

        if (countStop)
        {
            break;
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }

    cout << endl;
}
