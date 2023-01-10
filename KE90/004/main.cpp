#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int H, W;
    cin >> H >> W;

    int A[H][W], B[H][W];
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> A[i][j];
            B[i][j] = 0;
        }
    }

    vector<int> sumH(H, 0), sumW(W, 0);
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            sumH[i] += A[i][j];
            sumW[j] += A[i][j];
        }
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            B[i][j] = sumH[i] + sumW[j];
            B[i][j] -= A[i][j];
            cout << B[i][j];
            if (j != W - 1) cout << " ";
        }
        cout << endl;
    }
}