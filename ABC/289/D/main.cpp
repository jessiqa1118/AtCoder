#include <bits/stdc++.h>

using namespace std;

#define ll long long

int N, M, X;
set<int> A, B;

bool can_reach(int pos) {
    if (pos == X) return true;
    if (pos > X) return false;
    if (B.find(pos) != B.end()) return false;

    for (auto a: A) {
        if(can_reach(pos + a)) return true;
    }

    return false;
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        A.insert(a);
    }

    cin >> M;
    for (int i = 0; i < M; i++) {
        int b;
        cin >> b;
        B.insert(b);
    }

    cin >> X;

    int pos = 0;
    cout << (can_reach(pos) ? "Yes" : "No") << endl;
}