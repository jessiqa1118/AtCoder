#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int N;
    cin >> N;

    int cnt = 0;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        if (s == "For") cnt++;
    }

    cout << ((cnt >= ((N + 1) / 2)) ? "Yes" : "No") << endl;
}