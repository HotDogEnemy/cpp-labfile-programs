#include <iostream>

using namespace std;

class First;
class Second;

class First {
    int num;
    public:
        First () {
            cout << "Enter value for num (class: First): ";
            cin >> num;
        }
        void show_larger(Second& obj2);
};

class Second {
    int num;
    public: 
        Second () {
            cout << "Enter value for num (class: Second): ";
            cin >> num;
        }
        friend void First :: show_larger(Second& obj2);
};

void First :: show_larger(Second& obj2) {
    if (num > obj2.num) {
        cout << "Number from First class is larger!" << endl;
    } else if (num < obj2.num) {
        cout << "Number from Second class is larger!" << endl;
    }
}

int main() {
    First f;
    Second s;
    f.show_larger(s);
    return 0;
}
