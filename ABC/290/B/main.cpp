#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int N, K;
    cin >> N >> K;

    string S;
    cin >> S;

    int cnt = 0;
    for (int i = 0; i < N; i++) {
        if (S[i] == 'o') cnt++;

        cout << (cnt <= K ? S[i] : 'x');
    }

    cout << endl;
}