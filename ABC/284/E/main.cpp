#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int N, M;
vector<vector<int>> G;

int get_path_num(int start, vector<bool> visited) {
    visited[start] = true;
    int cnt = 0;

    for (int nv: G[start]) {
        if (visited[nv]) continue;
        cnt += get_path_num(nv, visited);
    }

    return ++cnt;
}

int main() {
    cin >> N >> M;

    G.resize(N);
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        G[u - 1].push_back(v - 1);
        G[v - 1].push_back(u - 1);
    }

    vector<bool> visited(N, false);
    int cnt = get_path_num(0, visited);
    cout << min(cnt, (int) pow(10, 6)) << endl;
}
