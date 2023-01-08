#include <iostream>
using namespace std;

class Superparent {
    int a;
    public:
        Superparent(int a) {
            cout << "Arguments passed to superparent constructor:\n";
            cout << "a = " << a << '\n';
        }
        ~Superparent() {
            cout << "Superparent destructor called!\n";
        }
};

class Parent : public Superparent {
    int b;
    public:
        Parent(int a, int b) : Superparent(a), b(b) {
            cout << "Arguments passed to parent constructor:\n";
            cout << "a = " << a << '\n';
            cout << "b = " << b << '\n';
        }
        ~Parent() {
            cout << "Parent destructor called!\n";
        }
};

class Child : public Parent {
    int c;
    public:
        Child(int a, int b, int c) : Parent(a, b), c(c) {
            cout << "Arguments passed to child constructor:\n";
            cout << "a = " << a << '\n';
            cout << "b = " << b << '\n';
            cout << "c = " << c << '\n';
        }
        ~Child() {
            cout << "Child destructor called!\n";
        }
};

int main() {
    Child ch(1, 2, 3);
    return 0;
}
