#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> G(N + 1);
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;

        G[a].push_back(b);
        G[b].push_back(a);
    }

    for (int i = 1; i < N + 1; i++) {
        sort(G[i].begin(), G[i].end());
        cout << (int) G[i].size();
        for (int n : G[i]) {
            cout << " " << n;
        }

        cout << endl;
    }
}