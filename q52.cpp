/*
 * WAP to demonstrate the overloading of unary increment operator.
 */
#include <iostream>
using namespace std;

class Box {
    int length, breadth, height;
    public:
        Box() {
            length = breadth = height = 0;
        }
        Box(int length, int breadth, int height) : 
            length(length), breadth(breadth), height(height) { }
        void operator ++() {
            length += 1;
            breadth += 1;
            height += 1;
        }
        void display() {
            cout << "Length = " << length << '\n';
            cout << "Breadth = " << breadth << '\n';
            cout << "Height = " << height << '\n';
        }
};

int main() {
    Box b(10, 10, 10);
    cout << "Box dimensions before increment: \n";
    b.display();
    ++b;
    cout << "\nBox dimensions after increment: \n";
    b.display();
    return 0;
}
