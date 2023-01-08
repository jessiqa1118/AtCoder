#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> group;
vector<bool> node;

void visit(int n) {
    node[n] = true;
    for (int i: group[n]) {
        if (!node[i]) visit(i);
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    group.resize(N);
    for (int i = 0; i < N; i++) {
        node.push_back(false);
    }

    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        group[u - 1].push_back(v - 1);
        group[v - 1].push_back(u - 1);
    }

    int cnt = 0;
    for (int i = 0; i < N; i++) {
        if (!node[i]) cnt++, visit(i);
    }

    cout << cnt << endl;
}