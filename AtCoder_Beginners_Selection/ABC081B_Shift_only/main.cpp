#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int cnt = 0;
    bool containsOdd = false;
    while (!containsOdd)
    {
        for (int i = 0; i < N; i++)
        {
            if ((A[i] % 2) == 1)
            {
                containsOdd = true;
                break;
            }
            else
            {
                A[i] /= 2;
            }
        }
        
        if (!containsOdd)
        {
            cnt++;
        }
    }

    cout << cnt << endl;
}
