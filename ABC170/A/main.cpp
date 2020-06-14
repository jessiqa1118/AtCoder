#include <iostream>
#include <vector>
 
using namespace std;
 
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
int main()
{
    vector<int> x(5);
    rep(i, 5)
    {
        cin >> x[i];
        if (x[i] == 0)
        {
            cout << i + 1 << endl;
            break;
        }
    }
}
