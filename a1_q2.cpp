#include <iostream>

int main() {
    int marks;

    std::cout << "Enter the student's marks: ";
    std::cin >> marks;

    if (marks > 90) {
        std::cout << "Excellent ";
    } else if (marks > 80) {
        std::cout << "Good";
    } else if (marks > 70) {
        std::cout << "Fair";
    } else if (marks > 60) {
        std::cout << "Meets Expectations";
    } else {
        std::cout << "Below Par";
    }

     std::cout << std::endl;

    return 0;
}
