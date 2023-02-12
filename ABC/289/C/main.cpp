#include <bits/stdc++.h>

using namespace std;

#define ll long long

int N;
vector<vector<int>> a;

bool is_covered(int flag) {
    int itr = 1;
    vector<bool> num(N + 1, false);
    while (flag) {
        if (flag % 2 == 1) {
            for (int n: a[itr]) {
                num[n] = true;
            }
        }
        itr += 1;
        flag /= 2;
    }

    for (int i = 1; i < N + 1; i++) {
        if (!num[i]) return false;
    }

    return true;
}

int main() {
    int M;
    cin >> N >> M;

    a.resize(M + 1);
    for (int m = 1; m < M + 1; m++) {
        int C;
        cin >> C;

        for (int i = 0; i < C; i++) {
            int n;
            cin >> n;
            a[m].push_back(n);
        }
    }

    int cnt = 0;
    for (int i = 0; i < (1 << M); i++) {
        if (is_covered(i)) cnt++;
    }

    cout << cnt << endl;
}