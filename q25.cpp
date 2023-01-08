#include <iostream>

using namespace std;

class Box {
    float breadth, height, volume;
    public:
        Box () {
            cout << "Enter breadth: ";
            cin >> breadth;
            cout << "Enter height: ";
            cin >> height;
            cout << "Enter volume: ";
            cin >> volume;
        }
        friend float get_length(Box b);
};

float get_length(Box b) {
    return b.volume / (b.breadth * b.height);
}

int main() {
    Box b;
    cout << "Length of given box is: " << get_length(b) << endl;
    return 0;
}
