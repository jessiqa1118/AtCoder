#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int N, K;
    cin >> N >> K;

    queue<int> A;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        A.push(a);
    }

    for (int i = 0; i < K; i++) {
        A.pop();
        A.push(0);
    }

    for (int i = 0; i < N; i++) {
        int a = A.front();
        A.pop();

        cout << a;
        if (i != N - 1) cout << " ";
    }

    cout << endl;
}