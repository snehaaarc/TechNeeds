#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }

    return true;
}

int main() {
    int low, high;

    std::cin >> low >> high;

    if (low < 2) {
        low = 2;
    }

    for (int num = low; num <= high; num++) {
        if (isPrime(num)) {
            std::cout << num << std::endl;
        }
    }

    return 0;
}
