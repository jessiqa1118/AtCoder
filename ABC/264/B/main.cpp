#include <bits/stdc++.h>

using namespace std;

int main() {
    int R, C;
    cin >> R >> C;

    int max = std::max(abs(R - 7), abs(C - 7));
    cout << (max % 2 == 0 ? "black" : "white") << endl;
}