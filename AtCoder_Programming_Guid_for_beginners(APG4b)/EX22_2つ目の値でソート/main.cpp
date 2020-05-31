#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<pair<int, int>> p(N);

    for (int i = 0; i < N; i++)
    {
        int a, b;
        cin >> a >> b;

        p.at(i) = make_pair(b, a);
    }

    sort(p.begin(), p.end());

    for (int i = 0; i < N; i++)
    {
        cout << p.at(i).second << " " << p.at(i).first << endl;
    }
}
