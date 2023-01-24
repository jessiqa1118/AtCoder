#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int Q;
    cin >> Q;

    int t[Q], x[Q];
    for (int i = 0; i < Q; i++) cin >> t[i] >> x[i];

    vector<int> deck;
    for (int i = 0; i < Q; i++) {
        switch (t[i]) {
            case 1:
                deck.insert(deck.begin(), x[i]);
                break;
            case 2:
                deck.push_back(x[i]);
                break;
            case 3:
                cout << deck[x[i] - 1] << endl;
                break;
        }
    }
}