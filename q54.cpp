/*
 * WAP to demonstrate unary operator overloading using friend function.
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
        friend Box operator ++ (Box& obj);      // prefix unary overloading
        friend Box operator ++ (Box& obj, int);  // postfix unary overloading
};

void Box::display() {
    cout << "Length = " << length << '\n';
    cout << "Breadth = " << breadth << '\n';
    cout << "Height = " << height << '\n';
}

Box operator ++(Box& obj) {
    obj.length += 1;
    obj.breadth += 1;
    obj.height += 1;
    return obj;
}

Box operator ++(Box& obj, int) {
    Box result(obj);
    obj.length += 1;
    obj.breadth += 1;
    obj.height += 1;
    return result;
}

int main() {
    Box b(10, 10, 10);
    cout << "Box before changes: \n";
    b.display();

    b++;
    cout << "\nBox after postfix increment: \n";
    b.display();

    ++b;
    cout << "\nBox after prefix increment: \n";
    b.display();

    return 0;
}
