#include <bits/stdc++.h>

using namespace std;

int main() {
    string S;
    cin >> S;

    if (S.length() != 8) {
        cout << "No" << endl;
        return 0;
    }

    if (!regex_match(S.substr(0, 1), regex("[A-Z]"))
        || !regex_match(S.substr(7, 1), regex("[A-Z]"))) {
        cout << "No" << endl;
        return 0;
    }

    int num = stoi(S.substr(1, 6));
    if (num >= 100000 && num <= 999999)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}