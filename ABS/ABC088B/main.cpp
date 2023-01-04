#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    int p_alice = 0;
    int p_bob = 0;

    sort(a.begin(), a.end(), greater<int>());
    for (int i = 0; i < N; i++)
    {
        if ((i % 2) == 0)
        {
            p_alice += a[i];
        }
        else
        {
            p_bob += a[i];
        }
    }

    cout << p_alice - p_bob << endl;
}
