#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int H, W;
    cin >> H >> W;

    int cnt = 0;
    for (int i = 0; i < H; i++) {
        string s;
        cin >> s;
        for (int i = 0; i < (int) s.length(); i++) {
            if (s[i] == '#') cnt++;
        }
    }

    cout << cnt << endl;
}