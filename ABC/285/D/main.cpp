#include <bits/stdc++.h>

using namespace std;

#define ll long long

vector<int> par;

int get_root(int index) {
    if (par[index] == index) return index;
    return par[index] = get_root(par[index]);
}

int main() {
    int N;
    cin >> N;

    string S[N], T[N];
    vector<string> V;
    for (int i = 0; i < N; i++) {
        cin >> S[i] >> T[i];
        V.push_back(S[i]);
        V.push_back(T[i]);
    }

    // Delete duplications
    sort(V.begin(), V.end());
    unique(V.begin(), V.end());

    // Initialize roots
    par.resize((int) V.size());
    for (int i = 0; i < (int) V.size(); i++) {
        par[i] = i;
    }

    for (int i = 0; i < N; i++) {
        auto is = distance(V.begin(), find(V.begin(), V.end(), S[i]));
        auto it = distance(V.begin(), find(V.begin(), V.end(), T[i]));

        // Check group
        if (get_root(is) == get_root(it)) {
            cout << "No" << endl;
            return 0;
        }

        // Update roots
        par[it] = get_root(is);
    }

    cout << "Yes" << endl;
}