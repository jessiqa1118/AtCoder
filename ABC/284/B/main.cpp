#include <bits/stdc++.h>

using namespace std;

int T;

void test() {
    int N;
    cin >> N;

    int A[N], cnt = 0;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        if (A[i] % 2 != 0) cnt++;
    }

    cout << cnt << endl;
}

int main() {
    cin >> T;

    for (int i = 0; i < T; i++) test();
}
