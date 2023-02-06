#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int N, K;
    cin >> N >> K;

    vector<string> S(K);
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        if (i < K) S[i] = s;
    }

    sort(S.begin(), S.end());
    for (int i =0; i < (int)S.size(); i++) cout << S[i] << endl;
}