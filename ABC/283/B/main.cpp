#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

vector<int> A;

void process() {
    int num, k;
    cin >> num >> k;
    k--;

    if (num == 1) {
        int x;
        cin >> x;
        A[k] = x;
    } else {
        cout << A[k] << endl;
    }
}

int main() {
    int N;
    cin >> N;

    A.resize(N);
    rep(i, N) cin >> A[i];

    int Q;
    cin >> Q;
    rep(i, Q) process();
}