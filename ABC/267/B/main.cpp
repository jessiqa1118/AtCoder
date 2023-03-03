#include <bits/stdc++.h>

using namespace std;

int main() {
    string S;
    cin >> S;

    int row = 0;
    int col = 0;

    int cnt = 0;
    while (cnt < (int) S.length()) {
        cnt += row + 1;
        row++;
        col = row * 2 - 1;
    }

    vector<int> standing_pins_num(col, 0);
    for (int i = 1; i <= (int) S.length(); i++) {
        if (S[i - 1] == '1') {
            // TODO: Generalize the code
            switch (i) {
                case 7:
                    standing_pins_num[0]++;
                    break;
                case 4:
                    standing_pins_num[1]++;
                    break;
                case 2:
                case 8:
                    standing_pins_num[2]++;
                    break;
                case 1:
                case 5:
                    standing_pins_num[3]++;
                    break;
                case 3:
                case 9:
                    standing_pins_num[4]++;
                    break;
                case 6:
                    standing_pins_num[5]++;
                    break;
                case 10:
                    standing_pins_num[6]++;
                    break;
            }
        }
    }

    if (S[0] != '0') {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 0; i < col; i++) {
        if (standing_pins_num[i] == 0) continue;

        for (int j = i + 2; j < col; j++) {
            if (standing_pins_num[j] == 0) continue;

            bool isSplit = true;
            for (int k = i + 1; k < j; k++) {
                if (standing_pins_num[k] != 0) {
                    isSplit = false;
                    break;
                }
            }

            if (isSplit) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
}