#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string S;
    cin >> S;

    vector<string> keyword = {"dream", "dreamer", "erase", "eraser"};
    reverse(S.begin(), S.end());
    for (int i = 0; i < keyword.size(); i++)
    {
        reverse(keyword[i].begin(), keyword[i].end());
    }

    while (S.size() > 0)
    {
        bool contains_keyword = false;

        for (int i = 0; i < keyword.size(); i++)
        {
            string str = S.substr(0, min(keyword[i].size(), S.size()));
            if (str == keyword[i])
            {
                S = S.substr(keyword[i].size());
                contains_keyword = true;
                break;
            }
        }

        if (!contains_keyword)
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
}
