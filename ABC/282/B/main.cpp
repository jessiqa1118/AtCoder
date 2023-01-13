#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N, M;
    cin >> N >> M;

    bool S[N][M];
    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;

        for (int j = 0; j < M; j++) {
            S[i][j] = (str[j] == 'o');
        }
    }

    int cnt = 0;
    for (int n1 = 0; n1 < N; n1++) {
        for (int n2 = n1 + 1; n2 < N; n2++) {
            bool res = true;
            for (int j = 0; j < M; j++) {
                if (!(S[n1][j] || S[n2][j])) {
                    res = false;
                    break;
                }
            }
            if (res) cnt++;
        }
    }

    cout << cnt << endl;
}