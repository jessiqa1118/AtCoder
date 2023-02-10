#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int N;
    cin >> N;

    int max = 0, cnt = -1;
    for (int i = 0; i < N; i++) {
        int H; cin >> H;

        if (max < H) {
            max = H;
            cnt = i;
        }
    }

    cout << cnt + 1 << endl;
}