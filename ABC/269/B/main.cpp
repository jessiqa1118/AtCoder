#include <bits/stdc++.h>

using namespace std;

int main() {
    int A, B, C, D;

    string S[10];
    for (int i = 0; i < 10; i++) cin >> S[i];

    for (int i = 0; i < 10; i++) {
        bool found = false;
        for (int j = 0; j < 10; j++) {
            if (S[i][j] == '#') {
                A = i + 1;
                C = j + 1;
                found = true;
                break;
            }
        }
        if (found) break;
    }

    for (int i = 9; i >= 0; i--) {
        bool found = false;
        for (int j = 9; j >= 0; j--) {
            if (S[i][j] == '#') {
                B = i + 1;
                D = j + 1;
                found = true;
                break;
            }
        }
        if (found) break;
    }

    cout << A << " " << B << endl;
    cout << C << " " << D << endl;
}