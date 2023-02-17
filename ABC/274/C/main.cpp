#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> G;
vector<int> depth;

void dfs(int pos, int dep) {
    if (depth[pos] >= 0) return;

    depth[pos] = dep;
    for (auto n: G[pos]) {
        dfs(n, dep + 1);
    }
}

int main() {
    int N;
    cin >> N;

    G.resize((2 * N + 1) + 1);
    depth.resize((2 * N + 1) + 1);
    for (int i = 0; i <= 2 * N + 1; i++) depth[i] = -1;

    for (int i = 1; i <= N; i++) {
        int a;
        cin >> a;

        G[a].push_back(2 * i);
        G[a].push_back(2 * i + 1);
    }

    dfs(1, 0);

    for (int i = 1; i <= 2 * N + 1; i++) cout << depth[i] << endl;
}