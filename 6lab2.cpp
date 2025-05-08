#include <iostream>

using namespace std;


int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

int main() {
    int number, originalNumber, remainder, result = 0;
    int n = 0; 

   
    cout << "Enter an integer: ";
    cin >> number;

    originalNumber = number;

  
    while (originalNumber != 0) {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;


    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += power(remainder, n);
        originalNumber /= 10;
    }

    if (result == number) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}