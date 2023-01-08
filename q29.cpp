#include <iostream>

using namespace std;

class A {
    string itemname;
    int price;
    public:
        A (string name, int price) {
            this->itemname = name;
            this-> price = price;
        }
        friend class B;
};

class B {
    public:
        void display(A& item) {
            cout << "Item name: " << item.itemname << endl;
            cout << "Price: " << item.price << endl;
        }
};


int main() {
    A obj_a("Pencil", 4);
    B obj_b;
    obj_b.display(obj_a);
    return 0;
}
