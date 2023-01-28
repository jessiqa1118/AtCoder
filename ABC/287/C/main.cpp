#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> node(N + 1);
    for (int i = 1; i < M + 1; i++) {
        int u, v;
        cin >> u >> v;
        node[u].push_back(v);
        node[v].push_back(u);
    }

    if (M != N - 1) {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 1; i < N + 1; i++) {
        if ((int) node[i].size() > 2) {
            cout << "No" << endl;
            return 0;
        }
    }

    vector<bool> visit(N + 1, false);
    queue<int> que;

    visit[1] = true;
    que.push(1);
    while (!que.empty()) {
        int u = que.front();
        que.pop();

        for (int v: node[u]) {
            if (!visit[v]) {
                visit[v] = true;
                que.push(v);
            }
        }
    }

    for (int i = 1; i < N+1; i++) {
        if (!visit[i]) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}