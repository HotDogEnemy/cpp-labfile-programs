#include <iostream>

class A {
    int num;
    public:
        A(int n) {
            std::cout << "Class with value " << n << " created.\n";
            num = n;
        }
        ~A() {
            std::cout << "Class with value " << num << " destroyed. \n";
        }
};

int main() {
    A *obj1, *obj2, *obj3;
    std::cout << "Creating new classes:\n";
    obj1 = new A(1);
    obj2 = new A(2);
    obj3 = new A(3);
    std::cout << "Deleting created classes:\n";
    delete obj2;
    delete obj3;
    delete obj1;

    return 0;
}
