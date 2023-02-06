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

    vector<bool> visit(N + 1, false);

    int cnt = 0;
    for (int i = 1; i < N + 1; i++) {
        if (visit[i]) continue;

        queue<int> q;
        q.push(i);
        visit[i] = true;

        while (!q.empty()) {
            int n = q.front();
            q.pop();

            for (int nv: G[n]) {
                if (visit[nv]) continue;

                q.push(nv);
                visit[nv] = true;
                cnt++;
            }
        }
    }

    cout << M - cnt << endl;
}