#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int N;
    cin >> N;

    string S;
    cin >> S;

    for (int i = 0; i < (int) S.length(); i++) {
        if (S.substr(i, 2) == "na") {
            cout << "nya";
            i++;
        }
        else cout << S[i];
    }

    cout << endl;
}