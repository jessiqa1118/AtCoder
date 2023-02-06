#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int N;
    cin >> N;

    map<int, vector<int>> G;
    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    int st = 1;

    set<int> visited;
    visited.insert(st);

    queue<int> q;
    q.push(st);

    int max = 1;
    while (!q.empty()) {
        int n = q.front(); q.pop();

        for (auto nv: G[n]) {
            if (!visited.count(nv)) {
                q.push(nv);
                visited.insert(nv);
            }
        }
    }

    cout << *visited.rbegin() << endl;
}