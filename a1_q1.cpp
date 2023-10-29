#include <iostream>

int main() {
    int size = 5;
    
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            if (row == 0 || row == size - 1 || col == size - row - 1) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    
    return 0;
}
