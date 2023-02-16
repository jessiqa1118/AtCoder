#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int H, W;
    cin >> H >> W;

    char C[H][W];
    for (int h = 0; h < H; h++) {
        for (int w = 0; w < W; w++) {
            cin >> C[h][w];
        }
    }

    for (int w = 0; w < W; w++) {
        int cnt = 0;
        for (int h = 0; h < H; h++) {
            if (C[h][w] == '#') cnt++;
        }
        cout << cnt << " ";
    }

    cout << endl;
}