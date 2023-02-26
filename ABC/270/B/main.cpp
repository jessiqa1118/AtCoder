#include <bits/stdc++.h>

using namespace std;

int main() {
    int X, Y, Z;
    cin >> X >> Y >> Z;

    if (Y < 0) {
        X = -X;
        Y = -Y;
        Z = -Z;
    }

    if (X < Y) {
        cout << abs(X) << endl;
    } else {
        if (Z < Y) {
            cout << abs(Z) + abs(X - Z) << endl;
        } else {
            cout << -1 << endl;
        }
    }
}