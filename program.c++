#include <iostream>

// Function to calculate the factorial of a number
unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else {
        unsigned long long fact = 1;
        for (int i = 2; i <= n; i++) {
            fact *= i;
        }
        return fact;
    }
}

int main() {
    int num;

    // Input
    std::cout << "Enter a non-negative integer: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "Factorial is undefined for negative numbers." << std::endl;
    } else {
        // Calculate and display the factorial
        unsigned long long fact = factorial(num);
        std::cout << "Factorial of " << num << " is " << fact << std::endl;
    }

    return 0;
}
