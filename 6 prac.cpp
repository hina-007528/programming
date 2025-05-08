// #include <iostream>
// using namespace std;

// class Rectangle {
// private:
//     int length;
//     int width;

// public:
//     Rectangle(int l, int w) {
//         length = l;
//         width = w;
//     }

//     Rectangle(const Rectangle &rect) {
//         length = rect.length; 
//         width = rect.width;   
//     }
//     void display() const {
//         cout << "Length: " << length << ", Width: " << width << endl;
//     }
//     void setDimensions(int l, int w) {
//         length = l;
//         width = w;
//     }
// };

// int main() {
//     Rectangle rect1(10, 5);
//     cout << "Original Rectangle (rect1): " << endl;
//     rect1.display();
//     Rectangle rect2 = rect1;
//     cout << "\nCopied Rectangle (rect2): " << endl;
//     rect2.display();
//     rect2.setDimensions(20, 10);
//     cout << "\nModified Rectangle (rect2): " << endl;
//     rect2.display();
//     cout << "\nOriginal Rectangle (rect1) after modifying rect2: " << endl;
//     rect1.display();

//     return 0;
// }
// #include <iostream>
// using namespace std;

// class Rectangle {
// private:
//     int* length;  
//     int* width;   

// public:
   
//     Rectangle(int l, int w) {
//         length = new int; 
//         width = new int;  

//         *length = l;  
//         *width = w;   
//     }
//     Rectangle(const Rectangle &rect) {
//         length = rect.length;  
//         width = rect.width;   
//     }
//     void display() const {
//         cout << "Length: " << *length << ", Width: " << *width << endl;
//     }
//     void setDimensions(int l, int w) {
//         *length = l;
//         *width = w;
//     }
//     ~Rectangle() {
    
//         delete length;
//         delete width;
//     }
// };

// int main() {
   
//     Rectangle rect1(10, 5);
//     cout << "Original Rectangle (rect1): " << endl;
//     rect1.display();
//     Rectangle rect2 = rect1;
//     cout << "\nCopied Rectangle (rect2): " << endl;
//     rect2.display();
//     rect2.setDimensions(20, 10);
//     cout << "\nModified Rectangle (rect2): " << endl;
//     rect2.display();
//     cout << "\nOriginal Rectangle (rect1) after modifying rect2: " << endl;
//     rect1.display();

//     return 0;
// }
#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor to initialize the complex number
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Getter functions for real and imaginary parts
    float getReal() const { return real; }
    float getImag() const { return imag; }

    // Method to display the complex number
    void show() const {
        cout << real << " + " << imag << "i" << endl;
    }

    // Operator+ function to subtract two complex numbers
    Complex operator+(const Complex& c) const {
        return Complex(real + c.real, imag + c.imag);
    }

    // Operator- function to add two complex numbers
    Complex operator-(const Complex& c) const {
        return Complex(real - c.real, imag - c.imag);
    }

    // Operator* function to multiply two complex numbers
    Complex operator*(const Complex& c) const {
        return Complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
    }

    // Operator/ function to divide first complex number by the second
    Complex operator/(const Complex& c) const {
        float denominator = c.real * c.real + c.imag * c.imag;
        if (denominator == 0) {
            cout << "Error: Division by zero!" << endl;
            return Complex();
        }
        float realPart = (real * c.real + imag * c.imag) / denominator;
        float imagPart = (imag * c.real - real * c.imag) / denominator;
        return Complex(realPart, imagPart);
    }
};

// Driver code to test the Complex class
int main() {
    Complex c1(4, 3);   // Complex number 4 + 3i
    Complex c2(1, 2);   // Complex number 1 + 2i

    // Displaying the complex numbers
    cout << "Complex number 1: ";
    c1.show();
    cout << "Complex number 2: ";
    c2.show();

    // Addition of c1 and c2
    Complex sum = c1 + c2;
    cout << "\nAddition (c1 + c2): ";
    sum.show();

    // Subtraction of c1 and c2
    Complex diff = c1 - c2;
    cout << "\nSubtraction (c1 - c2): ";
    diff.show();

    // Multiplication of c1 and c2
    Complex prod = c1 * c2;
    cout << "\nMultiplication (c1 * c2): ";
    prod.show();

    // Division of c1 by c2
    Complex quot = c1 / c2;
    cout << "\nDivision (c1 / c2): ";
    quot.show();

    return 0;
}
