#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int N;
    cin >> N;

    int S[N], A[N], sum[N];
    for (int i = 0; i < N; i++) {
        cin >> S[i];
        sum[N] = 0;
    }

    A[0] = S[0];
    sum[0] = A[0];
    cout << A[0];
    for (int i = 1; i < N; i++) {
        A[i] = S[i] - sum[i - 1];
        sum[i] = sum[i - 1] + A[i];
        cout << " " << A[i];
    }

    cout << endl;
}