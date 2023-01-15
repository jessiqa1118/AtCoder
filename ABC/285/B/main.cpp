#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int N;
    cin >> N;

    string S;
    cin >> S;

    for (int i = 1; i < N; i++) {
        int l = N - i;

        while (l > 0) {
            bool ans = true;
            for (int k = 1; k <= l; k++) {
                if (S[k - 1] == S[(k + i) - 1]) {
                    ans = false;
                    break;
                }
            }

            if (ans) break;
            else l--;
        }

        cout << l << endl;
    }
}