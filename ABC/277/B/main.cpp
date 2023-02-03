#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int N;
    cin >> N;

    string S[N];
    for (int i = 0; i < N; i++) cin >> S[i];

    string first = "HDCS";
    string second = "A23456789TJQK";
    string ans = "Yes";
    for (int i = 0; i < N; i++) {
        bool containFirst = false;
        for (char f: first) {
            if (S[i][0] == f) {
                containFirst = true;
                break;
            }
        }

        if (!containFirst) {
            ans = "No";
            break;
        }

        bool containSecond = false;
        for (char s: second) {
            if (S[i][1] == s) {
                containSecond = true;
                break;
            }
        }

        if (!containSecond) {
            ans = "No";
            break;
        }

        bool isSame = false;
        {
            for (int j = i + 1; j < N; j++) {
                if (S[i] == S[j]) {
                    ans = "No";
                    break;
                }
            }
        }
    }

    cout << ans << endl;
}