#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    rep (i, N) cin >> A[i];
    sort(A.begin(), A.end());

    int Q;
    cin >> Q;
    vector<int> B(Q);
    rep (j, Q) cin >> B[j];

    rep (j, Q) {
        auto p = upper_bound(A.begin(), A.end(), B[j]);
        int res = INT_MAX;
        if (p != A.begin()) res = min(abs(B[j] - *prev(p)), res);
        res = min(abs(*p - B[j]), res);
        cout << res << endl;
    }
}
