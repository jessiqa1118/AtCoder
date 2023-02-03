#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int N, K;
    cin >> N >> K;

    string S;
    cin >> S;

    map<char, vector<int>> map;
    for (int i = 0; i < (int) S.size(); i++) {
        map[S[i]].push_back(i);
    }

    int left = 0;
    for (int k = 0; k < K; k++) {
        for (int c = 'a'; c <= 'z'; c++) {
            bool found = false;
            for (auto i: map[c]) {
                if (left > i) continue;

                if ((int) S.size() - i >= K - k) {
                    cout << (char) c;
                    left = i + 1;
                    found = true;
                    break;
                }
            }
            if (found) break;
        }
    }

    cout << endl;
}