/*
 * WAP to show overloading of prefix and postfix increment operators.
 */
#include <iostream>
using namespace std;

class Box {
    int length, breadth, height;
    public:
        Box() : length{0}, breadth{0}, height{0} { }
        Box(int length, int breadth, int height) :
            length{length}, breadth{breadth}, height{height} { }
        Box(Box& obj) : 
            length{obj.length}, breadth{obj.breadth}, height{obj.height} { }
        void display();
        Box& operator ++ ();        // prefix operator overloading
        Box operator ++ (int);      // postfix operator overloating
};

void Box::display() {
    cout << "Length = " << length << '\n';
    cout << "Breadth = " << breadth << '\n';
    cout << "Height = " << height << '\n';
}

// prefix operator overloading
Box& Box::operator ++ () {
    length += 1;
    breadth += 1;
    height += 1;
    return *this;
}

// postfix operator overloading
Box Box::operator ++ (int) {
    Box result(*this);
    length += 1;
    breadth += 1;
    height += 1;
    return result;
}

int main() {
    Box b(10, 10, 10);
    cout << "Box before incrementing: \n";
    b.display();

    b++;
    cout << "\nBox after postfix increment: \n";
    b.display();

    ++b;
    cout << "\nBox after prefix increment: \n";
    b.display();
    return 0;
}
