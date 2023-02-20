#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int N, M;
    cin >> N >> M;

    int A[N + 1];
    for (int i = 1; i < N + 1; i++) cin >> A[i];

    int score = 0;
    for (int i = 0; i < M; i++) {
        int b;
        cin >> b;
        score += A[b];
    }

    cout << score << endl;
}