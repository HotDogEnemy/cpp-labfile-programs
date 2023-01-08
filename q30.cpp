#include <iostream>

using namespace std;

class A {
    int num;
    string str;
    public:
        //default constructor:
        A () {
            cout << "Default constructor called!" << endl;
            cout << "Enter value for num: ";
            cin >> num;
            cout << "Enter value for str: ";
            cin >> str;
        }
        // Parametrized constructor:
        A (int num, string str) {
            cout << "Parametrized constructor called!" << endl;
            this->num = num;
            this->str = str;
        }
        //Copy constructor
        A (A& t) {
            cout << "Copy constructor called!" << endl;
            num = t.num;
            str = t.str;
        }
        void display_values();
};

void A :: display_values() {
    cout << "\tNum = " << num << endl;
    cout << "\tStr = " << str << endl;
}

int main() {
    A default_ctor;
    cout << "Entered values: " << endl;
    default_ctor.display_values();
    cout << endl;

    A param_ctor(420, "Mark");
    cout << "Entered values: " << endl;
    param_ctor.display_values();
    cout << endl;

    A copy_ctor(default_ctor);
    cout << "Entered values: " << endl;
    copy_ctor.display_values();

    return 0;
}
