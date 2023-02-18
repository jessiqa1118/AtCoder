#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int N;
    cin >> N;

    int ans = 1;
    for (int i = 1; i <= N; i++) ans *= i;

    cout << ans << endl;
}