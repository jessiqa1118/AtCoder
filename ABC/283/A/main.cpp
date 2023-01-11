#include <bits/stdc++.h>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int res = 1;
    for (int i = 0; i < B; i++) res *= A;
    cout << res << endl;
}
