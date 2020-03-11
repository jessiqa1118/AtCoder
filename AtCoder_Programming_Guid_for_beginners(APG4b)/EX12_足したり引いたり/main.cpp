#include <iostream>

using namespace std;

int main()
{
    string input;
    cin >> input;

    int a = 1;
    for (int i = 1; i < input.size(); i += 2)
    {
        char op = input.at(i);

        if (op == '+')
        {
            a++;
        }
        else if (op == '-')
        {
            a--;
        }
    }

    cout << a << endl;
}
