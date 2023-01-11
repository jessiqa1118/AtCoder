#include <bits/stdc++.h>

using namespace std;

const int LIMIT = pow(10, 6);

int N, M;
int cnt = 0;
vector<bool> visited;
vector<vector<int>> G;

void dfs(int start) {
    visited[start] = true;
    cnt++;

    for (int nv: G[start]) {
        if (visited[nv]) continue;
        dfs(nv);
        if (cnt > LIMIT) break;
    }

    visited[start] = false;
}

int main() {
    cin >> N >> M;

    G.resize(N);
    visited.resize(N, false);
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        G[u - 1].push_back(v - 1);
        G[v - 1].push_back(u - 1);
    }

    dfs(0);
    cout << min(cnt, LIMIT) << endl;
}