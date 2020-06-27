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
    int N, M, K;
    cin >> N >> M >> K;

    vector<long long> A(N), a(N + 1, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        a[i + 1] = a[i] + A[i];
    }

    vector<long long> B(M), b(M + 1, 0);
    for (int j = 0; j < M; j++)
    {
        cin >> B[j];
        b[j + 1] = b[j] + B[j];
    }

    int j = M;
    int res = 0;
    for (int i = 0; i < N + 1; i++)
    {
        if (a[i] > K)
        {
            break;
        }

        while (b[j] > (K - a[i]))
        {
            j--;
        }

        chmax(res, i + j);
    }

    cout << res << endl;
}
