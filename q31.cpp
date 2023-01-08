#include <iostream>

using namespace std;

class Complex {
    float real, i;
    public:
        Complex() {
            cout << "Enter real part: ";
            cin >> real;
            cout << "Enter imaginary part: ";
            cin >> i;
        }
        Complex (float real, float i) {
            this->real = real;
            this->i = i;
        }
        void add(Complex& a);
};

void Complex :: add (Complex& a) {
    Complex result(real + a.real, i + a.i);
    cout << "Sum: " << result.real << " + " << result.i << "i" << endl;
}

int main() {
    Complex a,b;
    a.add(b);

    return 0;
}
