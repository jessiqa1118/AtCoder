#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int hon[] = {2, 4, 5, 7, 9};
    int pon[] = {0, 1, 6, 8};
    int bon[] = {3};

    if (find(begin(hon), end(hon), N % 10) != end(hon))
    {
        cout << "hon" << endl;
    }
    else if (find(begin(pon), end(pon), N % 10) != end(pon))
    {
        cout << "pon" << endl;
    }
    else if (find(begin(bon), end(bon), N % 10) != end(bon))
    {
        cout << "bon" << endl;
    }
}
