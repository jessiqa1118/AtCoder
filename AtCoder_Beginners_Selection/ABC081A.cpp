#include <iostream>

using namespace std;

int main()
{
    string input;
    int cnt = 0;
    cin >> input;

    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == '1')
        {
            cnt++;
        }
    }

    cout << cnt << endl;
}
