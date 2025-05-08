#include <iostream>
#include <string>

using namespace std;

// Function to check if a character is uppercase
bool isUpperCase(char ch) {
    return (ch >= 'A' && ch <= 'Z');
}

// Function to check if a character is lowercase
bool isLowerCase(char ch) {
    return (ch >= 'a' && ch <= 'z');
}

// Function to check if a character is a digit
bool isDigit(char ch) {
    return (ch >= '0' && ch <= '9');
}

// Function to check if a character is a special character
bool isSpecialCharacter(char ch) {
    // Special character if it's not an alphanumeric character
    return !isUpperCase(ch) && !isLowerCase(ch) && !isDigit(ch);
}

// Function to check password strength
void checkPasswordStrength(const string& password) {
    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
    
    // Check each character in the password
    for (char ch : password) {
        if (isUpperCase(ch)) hasUpper = true;
        else if (isLowerCase(ch)) hasLower = true;
        else if (isDigit(ch)) hasDigit = true;
        else if (isSpecialCharacter(ch)) hasSpecial = true;
    }
    
    // Determine the strength of the password
    if (hasUpper && hasLower && hasDigit && hasSpecial) {
        cout << "Very Strong Password" << endl;
    } else if ((hasUpper || hasLower) && (hasDigit || hasSpecial)) {
        cout << "Strong Password" << endl;
    } else {
        cout << "Weak Password" << endl;
    }
}

int main() {
    string password;
    char choice;

    do {
        // Input the password
        cout << "Enter password: ";
        getline(cin, password);

        // Check the strength of the password
        checkPasswordStrength(password);

        // Ask if the user wants to check more passwords
        cout << "Do you want to check more? (Y/N): ";
        cin >> choice;
        cin.ignore();  // Ignore newline left in the buffer
        
    } while (choice == 'Y' || choice == 'y');

    cout << "Program terminated." << endl;

    return 0;
}