#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<int> L(N);
    vector<vector<int>> A(N);
    for (int i = 0; i < N; i++) {
        cin >> L[i];
        for (int l = 0; l < L[i]; l++) {
            int a;
            cin >> a;
            A[i].push_back(a);
        }
    }

    for (int i = 0; i < Q; i++) {
        int s, t;
        cin >> s >> t;

        cout << A[s - 1][t - 1] << endl;
    }
}