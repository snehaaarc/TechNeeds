#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> digits; 

    while (n > 0) {
        int digit = n % 10;
        digits.push_back(digit);
        n /= 10;
    }

    int size = digits.size();
    int inverse = 0;

    for (int i = 0; i < size; i++) {
        inverse += (digits[i] * pow(10, size - i - 1));
    }

    std::cout << inverse << std::endl;

    return 0;
}
