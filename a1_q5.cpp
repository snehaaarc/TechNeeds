#include <iostream>

int main() {
    int n;
    
    std::cin >> n;
    
    int count = 0;
    int num = n; 

    while (num != 0) {
        num /= 10;
        count++;
    }
  
    std::cout << count << std::endl;
    
    return 0;
}
