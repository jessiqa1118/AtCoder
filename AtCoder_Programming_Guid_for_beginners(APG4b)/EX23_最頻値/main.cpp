#include <iostream>
#include <map>

using namespace std;

int main()
{
    int N;
    cin >> N;
    map<int, int> m;

    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;

        if (m.count(num))
        {
            m.at(num)++;
        }
        else
        {
            m[num] = 1;
        }
    }

    int max_num = 0;
    int max_cnt = 0;

    for (auto i = m.begin(); i != m.end(); i++)
    {
        if (max_cnt < i->second)
        {
            max_num = i->first;
            max_cnt = i->second;
        }
    }

    cout << max_num << " " << max_cnt << endl;
}
