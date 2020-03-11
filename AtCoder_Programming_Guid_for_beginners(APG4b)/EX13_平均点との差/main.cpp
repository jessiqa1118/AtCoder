#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> score(n);
    int sum = 0;
    for (int i = 0; i < score.size(); i++)
    {
        cin >> score.at(i);
        sum += score.at(i);
    }

    int avg = sum / score.size();
    for (int i = 0; i < score.size(); i++)
    {
        if (avg < score.at(i))
        {
            cout << score.at(i) - avg << endl;
        }
        else
        {
            cout << avg - score.at(i) << endl;
        }
    }
}
