#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct point
{
    int x;
    int y;
};

int main()
{
    int N;
    cin >> N;

    vector<point> p(N);

    for (int i = 0; i < N; i++)
    {
        point _point;
        cin >> _point.x >> _point.y;
        p[i].x = _point.x;
        p[i].y = _point.y;
    }

    float max_length = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            float length = sqrt(pow((p[j].x - p[i].x), 2) + pow((p[j].y - p[i].y), 2));
            max_length = fmax(max_length, length);
        }
    }

    cout << max_length << endl;
}
