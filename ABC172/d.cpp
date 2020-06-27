#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    long long ans = 0;
    for (int j = 1; j < N + 1; j++)
    {
        int i = j;
        while (i <= N)
        {
            ans += i;
            i += j;
        }
    }

    cout << ans << endl;
}
