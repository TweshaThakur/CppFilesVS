#include <iostream>
#include <cmath>
#include <stdexcept>

using namespace std;

class PrimeNumberException : public exception {
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
        cout << "Enter a number between 1 and 100: ";
        int number;
        cin >> number;

        if (number < 1 || number > 100) {
            throw out_of_range("Number out of range (1-100).");
        }

        if (isPrime(number)) {
            throw PrimeNumberException();
        }

        cout << "Number is not prime.\n";
    } catch (const out_of_range& e) {
        cerr << "Error: " << e.what() <<endl;
    } catch (const PrimeNumberException& e) {
        cerr << "Error: " << e.what() << endl;
    } catch (const exception& e) {
        cerr << "Error: " << e.what() <<endl;
    }

    return 0;
}
