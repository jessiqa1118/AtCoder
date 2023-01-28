#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> next;
    next.resize(N + 1);
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        next[u].push_back(v);
        next[v].push_back(u);
    }

    vector<int> visitCnt(N + 1, 0);
    for (int i = 1; i < N + 1; i++) {
        for (int n: next[i]) {
            visitCnt[n]++;
        }
    }

    int endNum = 0;
    for (int i = 1; i < N + 1; i++) {
        if (visitCnt[i] == 1) {
            endNum++;
            continue;
        }

        if (visitCnt[i] != 2) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << ((endNum == 2) ? "Yes" : "No") << endl;
}