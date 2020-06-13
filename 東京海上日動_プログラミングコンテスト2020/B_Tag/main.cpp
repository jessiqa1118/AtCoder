#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }

    return false;
}

int main()
{
    int A, V, B, W, T;
    cin >> A >> V >> B >> W >> T;

    int speed = V - W;
    if (speed <= 0)
    {
        cout << "NO" << endl;
        return 0;
    }

    int dist = abs(B - A);

    for (int i = 0; i < T; i++)
    {
        dist -= speed;
        if (dist <= 0)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
}
