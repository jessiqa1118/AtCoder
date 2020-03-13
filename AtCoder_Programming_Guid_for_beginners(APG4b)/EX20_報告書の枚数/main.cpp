#include <iostream>
#include <vector>

using namespace std;

int count_report_num(vector<vector<int>> &children, int x)
{
    int cnt = 1;

    if (children.at(x).size() != 0)
    {
        for (int i : children.at(x))
        {
            cnt += count_report_num(children, i);
        }
    }

    return cnt;
}

int main()
{
    int n;
    cin >> n;

    vector<int> p(n);
    p.at(0) = -1;
    for (int i = 1; i < n; i++)
    {
        cin >> p.at(i);
    }

    vector<vector<int>> children(n);
    for (int i = 1; i < n; i++)
    {
        int parent = p.at(i);
        children.at(parent).push_back(i);
    }

    for (int i = 0; i < n; i++)
    {
        cout << count_report_num(children, i) << endl;
    }
}
