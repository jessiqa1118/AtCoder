#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(m), b(m);
    vector<vector<char>> result(n, vector<char>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result.at(i).at(j) = '-';
        }
    }

    for (int i = 0; i < m; i++)
    {
        cin >> a.at(i) >> b.at(i);
        result.at(a.at(i)-1).at(b.at(i)-1) = 'o';
        result.at(b.at(i)-1).at(a.at(i)-1) = 'x';
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j != 0)
            {
                cout << ' ';
            }
            cout << result.at(i).at(j);
        }
        cout << endl;
    }
}
