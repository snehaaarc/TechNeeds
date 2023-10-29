#include <iostream>
#include <cmath>

int calculateGCD(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    }
    return calculateGCD(num2, num1 % num2);
}

int main() {
    int num1, num2;
    
    std::cin >> num1 >> num2;
    int gcd = calculateGCD(num1, num2);
  
    int lcm = (num1 * num2) / gcd;
    
    std::cout << gcd << std::endl;
    std::cout << lcm << std::endl;
    
    return 0;
}
