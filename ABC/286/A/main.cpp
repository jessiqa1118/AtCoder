#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int N, P, Q, R, S;
    cin >> N >> P >> Q >> R >> S;

    int A[N], B[N];
    for (int i = 0; i < N; i++) cin >> A[i];

    for (int i = 0; i < (Q - P) + 1; i++) {
        int tmp = A[(P - 1) + i];
        A[(P - 1) + i] = A[(R - 1) + i];
        A[(R - 1) + i] = tmp;
    }

    for (int i = 0; i < N; i++) {
        cout << A[i];
        if (i != N - 1) cout << " ";
    }

    cout << endl;
}