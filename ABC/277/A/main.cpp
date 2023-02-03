#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int N, X;
    cin >> N >> X;

    for (int i = 0; i < N; i++) {
        int p;
        cin >> p;

        if (p == X) {
            cout << i + 1 << endl;
            break;
        }
    }
}