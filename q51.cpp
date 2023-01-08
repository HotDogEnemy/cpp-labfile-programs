/*
 * WAP to demonstrate the concept of virtual destructors
 */
#include <iostream>
using namespace std;

// Class without virtual destructor
class Base1 {
    public:
        Base1() {
            cout << "Base1 constructor called.\n";
        }
        ~Base1() {
            cout << "Base1 destructor called.\n";
        }
};

class Derived1 : public Base1 {
    public:
        Derived1() {
            cout << "Derived1 constructor called.\n";
        }
        ~Derived1() {
            cout << "Derived1 destructor called.\n";
        }
};

// Base class with virtual destructor
class Base2 {
    public:
        Base2() {
            cout << "Base2 constructor called.\n";
        }
        virtual ~Base2() {
            cout << "Base2 destructor called.\n";
        }
};

class Derived2 : public Base2 {
    public:
        Derived2() {
            cout << "Derived2 constructor called.\n";
        }
        ~Derived2() {
            cout << "Derived2 destructor called.\n";
        }
};

int main() {
    cout << "WITHOUT VIRTUAL DESTRUCTOR:\n";
    Base1 *ptr1 = new Derived1();
    delete ptr1;

    cout << "\nWITH VIRTUAL DESTRUCTOR:\n";
    Base2 *ptr2 = new Derived2();
    delete ptr2;
    return 0;
}

