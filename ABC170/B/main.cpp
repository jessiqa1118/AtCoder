#include <iostream>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int X, Y;
    cin >> X >> Y;

    rep(i, X + 1)
    {
        if ((i * 2 + (X - i) * 4) == Y)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
}
