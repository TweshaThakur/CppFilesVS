#include <iostream>
#include <cmath>
#include <stdexcept>

class PrimeNumberException : public std::exception {
public:
    const char* what() const noexcept override {
        return "PrimeNumberException: Entered number is prime!";
    }
};

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    try {
        std::cout << "Enter a number between 1 and 100: ";
        int number;
        std::cin >> number;

        if (number < 1 || number > 100) {
            throw std::out_of_range("Number out of range (1-100).");
        }

        if (isPrime(number)) {
            throw PrimeNumberException();
        }

        std::cout << "Number is not prime.\n";
    } catch (const std::out_of_range& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    } catch (const PrimeNumberException& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
