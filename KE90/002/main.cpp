#include <bits/stdc++.h>

using namespace std;

bool isCorrect(string s) {
    int cnt = 0;
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (s[i] == '(') cnt++;
        else if (s[i] == ')') cnt--;
        else return false;

        if (cnt < 0) return false;
    }

    return (cnt == 0);
}

int main() {
    int N;
    cin >> N;

    if ((N % 2) != 0) return 0;

    for (int i = 0; i < (1 << N); i++) {
        string result = "";
        for (int j = N - 1; j >= 0; j--) {
            result += ((i & (1 << j)) == 0) ? "(" : ")";
        }

        if (isCorrect(result)) cout << result << endl;
    }
}