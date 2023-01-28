#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int N, M;
    cin >> N >> M;

    string S[N], T[M];
    for (int i = 0; i < N; i++) cin >> S[i];
    for (int j = 0; j < M; j++) cin >> T[j];

    int cnt = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (S[i].substr(3, 3) == T[j]) {
                cnt++;
                break;
            }
        }
    }

    cout << cnt << endl;
}