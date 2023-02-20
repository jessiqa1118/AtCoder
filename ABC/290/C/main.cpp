#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int N, K;
    cin >> N >> K;

    vector<ll> A;
    for (int i = 0; i < N; i++) {
        ll a;
        cin >> a;
        A.push_back(a);
    }

    sort(A.begin(), A.end());
    A.erase(unique(A.begin(), A.end()), A.end());

    int cnt = 0;
    for (int i = 0; i < K; i++) {
        if ((int)A.size() <= i || A[i] != i) break;
        cnt++;
    }

    cout << cnt << endl;
}