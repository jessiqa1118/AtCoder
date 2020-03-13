#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> data(5);
    string result = "NO";
    int pre_num;

    for (int i = 0; i < 5; i++)
    {
        cin >> data.at(i);
    }

    pre_num = data.at(0);
    for (int i = 1; i < data.size(); i++)
    {
        if (pre_num == data.at(i))
        {
            result = "YES";
            break;
        }
        pre_num = data.at(i);
    }

    cout << result << endl;
}
