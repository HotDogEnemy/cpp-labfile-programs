#include <iostream>

class A {
    int a = 111;
    public:
        void display();
};

void A::display() {
    std::cout << "Value of variable in class A: " << a << '\n';
}

class B {
    int b = 222;
    public:
        void display();
};

void B::display() {
    std::cout << "Value of variable in class B: " << b << '\n';
}

class C : public A, public B {
};

int main() {
    C obj;
    /* to avoid ambiguity due to class C inheriting the display()
     * function from both class A and B, we use scope resolution. */
    obj.A::display();
    obj.B::display();
    return 0;
}
