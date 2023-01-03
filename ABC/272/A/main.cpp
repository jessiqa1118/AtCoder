#include <iostream>

int main() {
    int N;
    std::cin >> N;

    int A[N];
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        std::cin >> A[i];
        sum += A[i];
    }

    std::cout << sum << std::endl;
}