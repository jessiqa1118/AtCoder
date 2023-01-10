#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int N;
vector<vector<int>> G;

pair<int, int> get_max_distance(int start) {
    vector<int> dist(N, -1);
    queue<int> nodes;

    dist[start] = 0;
    nodes.push(start);

    while (!nodes.empty()) {
        int v = nodes.front();
        nodes.pop();

        for (int nv: G[v]) {
            if (dist[nv] != -1) continue;

            dist[nv] = dist[v] + 1;
            nodes.push(nv);
        }
    }

    int max = 0;
    int index = -1;
    for (int i = 0; i < N; i++) {
        if (dist[i] > max) max = dist[i], index = i;
    }

    return pair(max, index);
}

int main() {
    cin >> N;

    G.resize(N);
    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;
        G[a - 1].push_back(b - 1);
        G[b - 1].push_back(a - 1);
    }

    auto result = get_max_distance(get_max_distance(0).second);

    cout << result.first + 1 << endl;
}
