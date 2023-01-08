#include <iostream>
using namespace std;

class Shape {
    public:
        virtual float area() = 0;
};

class Rectangle : public Shape {
    float length, breadth;
    public:
        Rectangle(float length, float breadth) : length(length), breadth(breadth) { }
        float area() {
            return length * breadth;
        }
        float get_length() {
            return length;
        }
        float get_breadth() {
            return breadth;
        }
};

class Circle: public Shape {
    float radius;
    public:
        Circle(float r) : radius(r) {}
        float area() {
            return 3.14 * radius * radius;
        }
        float get_radius() {
            return radius;
        }
};

int main() {
    Rectangle rect(25, 10);
    Circle circ(7);

    cout << "Rectangle dimensions: " << rect.get_length() << "x" << rect.get_breadth() << '\n';
    cout << "Rectangle area: " << rect.area() << "\n\n";

    cout << "Circle radius: " << circ.get_radius() << '\n';
    cout << "Circle area: " << circ.area() << '\n';

    return 0;
}
