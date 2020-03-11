#include <iostream>
#include <vector>

using namespace std;

int sum(vector<int> scores)
{
    int s = 0;

    for (int i = 0; i < scores.size(); i++)
    {
        s += scores.at(i);
    }

    return s;
}

void output(int sum_a, int sum_b, int sum_c)
{
    cout << sum_a * sum_b * sum_c << endl;
}

vector<int> input(int n)
{
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec.at(i);
    }
    return vec;
}

int main()
{
    int n;
    cin >> n;

    vector<int> a = input(n);
    vector<int> b = input(n);
    vector<int> c = input(n);

    int sum_a = sum(a);
    int sum_b = sum(b);
    int sum_c = sum(c);

    output(sum_a, sum_b, sum_c);
}
