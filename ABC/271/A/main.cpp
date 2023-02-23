#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    ostringstream ss;
    ss << hex << N;

    string ans = ss.str();
    transform(ans.begin(), ans.end(), ans.begin(), ::toupper);
    cout << setfill('0') << setw(2) << ans << endl;
}