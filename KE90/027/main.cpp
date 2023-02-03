#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int N;
    cin >> N;

    string S[N];
    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }

    map<string, int> Map;
    for (int i = 0; i < N; i++) {
        if (Map[S[i]] == 0) cout << i + 1 << endl;
        Map[S[i]] = 1;
    }
}