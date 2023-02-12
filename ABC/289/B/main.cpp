#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int N, M;
    cin >> N >> M;

    vector<bool> include(N + 1, false);
    for (int i = 0; i < M; i++) {
        int a;
        cin >> a;
        include[a] = true;
    }

    int itr = 1;
    while (itr < N + 1) {
        for (int i = itr; i < N + 1; i++) {
            if (include[i]) continue;

            for (int j = i; j >= itr; j--) {
                cout << j << " ";
            }
            itr = i + 1;

            if (i == N) {
                for (int j = i; j >= itr; j--) {
                    cout << j << " ";
                }
                itr = i + 1;
            }
        }
    }

    cout << endl;
}