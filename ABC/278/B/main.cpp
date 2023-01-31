#include <bits/stdc++.h>

using namespace std;

#define ll long long

int TH, TM;

void update_clock(int H, int M)
{
    TH = (H / 10) * 10 + (M / 10);
    TM = (H % 10) * 10 + (M % 10);
}

int main() {
    int H, M;
    cin >> H >> M;

    update_clock(H, M);
    while (TH >= 24 || TM >= 60)
    {
        M++;
        if (M >= 60) {
            H = (H + 1) % 24;
            M %= 60;
        }

        update_clock(H, M);
    }

    cout << H << " " << M << endl;
}