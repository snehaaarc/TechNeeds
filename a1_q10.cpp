#include <iostream>

void primeFactorization(int n) {
    int factor = 2;
    
    while (n > 1) {
        if (n % factor == 0) {
            std::cout << factor << " ";
            n /= factor;
        } else {
        
            factor++;
        }
    }
}

int main() {
    int n;
 
    std::cin >> n;
    
    if (n <= 1) {
        std::cout << "Prime factorization is not defined for n <= 1." << std::endl;
    } else {
 
        primeFactorization(n);
    }

    return 0;
}
