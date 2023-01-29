#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int H, W;
    cin >> H >> W;

    string S[H], T[H];
    for (int j = 0; j < H; j++) cin >> S[j];
    for (int j = 0; j < H; j++) cin >> T[j];

    vector<string> TS[W], TT[W];
    for (int i = 0; i < W; i++) {
        string ts, tt;
        for (int j = 0; j < H; j++) {
            ts += S[j][i];
            tt += T[j][i];
        }

        TS->push_back(ts);
        TT->push_back(tt);
    }

    sort(TS->begin(), TS->end());
    sort(TT->begin(), TT->end());

    string res = "Yes";
    for (int i = 0; i < W; i++) {
        if (TS[i] != TT[i]) {
            res = "No";
            break;
        }
    }

    cout << res << endl;
}