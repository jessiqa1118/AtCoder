#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> N(5);
    for (int i = 0; i < 5; i++) {
        cin >> N[i];
    }

    sort(N.begin(), N.end());
    N.erase(unique(N.begin(), N.end()), N.end());

    cout << N.size() << endl;
}