#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int H, W;
    cin >> H >> W;

    int cnt = (H == 1 || W == 1) ? H * W : ((H / 2) + (H % 2)) * ((W / 2) + (W % 2));
    cout << cnt << endl;
}