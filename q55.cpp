/*
 * WAP to overload '+' operator so it can add two complex numbers.
 */
#include <iostream>
using namespace std;

class Complex {
    double real, imag;
    public:
        Complex() : real{0}, imag{0} { }
        Complex(double real, double imag) : real{real}, imag{imag} { }
        Complex(Complex& obj) : real{obj.real}, imag {obj.imag} { }
        void display();
        Complex operator + (const Complex& operand);
};

void Complex::display() {
    cout << real << " + " << imag << "i\n";
}

Complex Complex::operator + (const Complex& operand) {
    Complex result(real + operand.real, imag + operand.imag);
    return result;
}

int main() {
    Complex c1(10,2), c2(-2.5, -10);
    Complex result;

    cout << "c1 = ";
    c1.display();

    cout << "c2 = ";
    c2.display();

    result = c1 + c2;
    cout << "c1 + c2 = ";
    result.display();

    return 0;
}
