#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> d(N);
    for (int i = 0; i < N; i++)
    {
        cin >> d[i];
    }

    sort(d.begin(), d.end());
    int cnt = 1;
    for (int i = 1; i < N; i++)
    {
        if (d[i-1] != d[i])
        {
            cnt++;
        }
    }

    cout << cnt << endl;
}
