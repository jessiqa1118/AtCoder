#include <bits/stdc++.h>

using namespace std;

int N, L, K;
vector<int> A;

bool isSatisfied(int key) {
    int cnt = 0;
    int sum = 0;
    for (int i = 0; i < (int)A.size() + 1; i++) {
        if (i == 0) sum += A[i];
        else if (i == (int)A.size()) sum += L - A[i - 1];
        else sum += A[i] - A[i - 1];

        if (sum >= key) {
            cnt++;
            sum = 0;
        }
    }

    return (cnt >= K + 1);
}

int main() {
    cin >> N >> L;
    cin >> K;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        A.push_back(num);
    }

    int left = -1;
    int right = L + 1;

    while (right - left > 1) {
        int key = left + (ceil(right - left) / 2);
        if (isSatisfied(key)) left = key;
        else right = key;
    }

    cout << left << endl;
}