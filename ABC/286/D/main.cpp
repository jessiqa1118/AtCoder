#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int N, X;
    cin >> N >> X;

    int A[N], B[N];
    map<int, int> num;
    vector<int> coins;
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
        num[A[i]] = 0;
        coins.push_back(A[i]);
    }

    for (int i = 0; i < N; i++) {
        num[A[i]] += B[i];
    }

    sort(coins.begin(), coins.end());
    reverse(coins.begin(), coins.end());

    for (int value: coins) {
        while (X >= value && num[value] > 0) {
            X -= value;
            num[value]--;
        }
    }

    cout << ((X == 0) ? "Yes" : "No") << endl;
}