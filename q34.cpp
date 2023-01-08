#include <iostream>

using namespace std;

class Rect {
    float length, breadth, area;
    public:
        Rect() {
            cout << "Enter length and breadth: ";
            cin >> length >> breadth;
            area = length * breadth;
        }
        float get_area() {
            return area;
        }
};

int main() {
    cout << "Enter dimensions of 5 rectangles: \n";
    Rect rectarr[5];
    cout << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Area of triangle " << i+1 << " is: " << rectarr[i].get_area();
        cout << endl;
    }
    return 0;
}
