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
    int t, n;

    std::cin >> t;

    for (int i = 0; i < t; i++) {
      
        std::cin >> n;

  
        if (isPrime(n)) {
            std::cout << "prime" << std::endl;
        } else {
            std::cout << "not prime" << std::endl;
        }
    }

    return 0;
}
