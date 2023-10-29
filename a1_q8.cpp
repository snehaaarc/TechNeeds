#include <iostream>
#include <cmath>

int main() {
    int n, k;
    std::cin >> n >> k;

    int numDigits = static_cast<int>(log10(n)) + 1; 
    k = (k % numDigits + numDigits) % numDigits;

    int rightPart = n % static_cast<int>(pow(10, k));
    int leftPart = n / static_cast<int>(pow(10, k)); 
  
    int rotatedNumber = rightPart * static_cast<int>(pow(10, numDigits - k)) + leftPart;

    std::cout << rotatedNumber << std::endl;

    return 0;
}
