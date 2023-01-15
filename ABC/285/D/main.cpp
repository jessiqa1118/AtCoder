#include <bits/stdc++.h>

using namespace std;

#define ll long long

map<string, string> parent;

string get_root(string key) {
    if (parent[key] == key) return key;
    return parent[key] = get_root(parent[key]);
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
    for (int i = 0; i < (int) V.size(); i++) {
        parent[V[i]] = V[i];
    }

    for (int i = 0; i < N; i++) {
        // Check group
        if (get_root(S[i]) == get_root(T[i])) {
            cout << "No" << endl;
            return 0;
        }

        // Update roots
        parent[T[i]] = get_root(S[i]);
    }

    cout << "Yes" << endl;
}