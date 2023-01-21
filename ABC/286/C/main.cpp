#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll get_not_palindrome(string str) {
    ll cnt = 0, N = str.length() / 2;
    for (int i = 0; i < N; i++) {
        if (str[i] != str[(str.length() - 1) - i]) cnt++;
    }

    return cnt;
}

string move_right(string str, int num) {
    string newStr = "";
    newStr = str.substr(num, str.length() - num);
    for (int i = 0; i < num; i++) newStr += str[i];

    return newStr;
}

int main() {
    int N;
    ll A, B;
    cin >> N >> A >> B;

    string S;
    cin >> S;

    int minPatternStIndex = 0;
    ll minNotPalCnt = LONG_LONG_MAX;
    for (int i = 1; i < N; i++) {
        string str = move_right(S, i);
        ll notPalCnt = get_not_palindrome(str);
        if (minNotPalCnt > notPalCnt) {
            minPatternStIndex = i;
            minNotPalCnt = notPalCnt;
        }
    }

    ll cost = minPatternStIndex * A + minNotPalCnt * B;
    cout << cost << endl;
}