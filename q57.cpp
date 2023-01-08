/*
 * WAP to add two complex numbers by overloading '+' operator using friend 
 * function.
 */
#include <iostream>
using namespace std;

class Complex {
    double real, imag;
    public:
        Complex() : real{0}, imag{0} { }
        Complex(double real, double imag) : real{real}, imag{imag} { }
        Complex(Complex& obj) : real{obj.real}, imag{obj.imag} { }
        void display();
        friend Complex operator + (Complex a, Complex b);
};

void Complex::display() {
    cout << real << " + " << imag << "i\n";
}

Complex operator + (Complex a, Complex b) {
    Complex result(a.real + b.real, a.imag + b.imag);
    return result;
}

int main() {
    Complex c1(20, 30), c2(-2, 7);
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
