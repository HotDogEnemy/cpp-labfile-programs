/*
 * WAP to swap two values independent of the type of variable using function
 * template.
 */
#include <iostream>
using std::cout;
using std::string;

template <typename T>
void swap (T& a, T& b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 100, b = 200;
    string c = "hello", d = "world";

    cout << "Variables before swapping: \n";
    cout << "a = " << a << '\n';
    cout << "b = " << b << '\n';
    cout << "c = " << c << '\n';
    cout << "d = " << d << '\n';

    swap(a, b);
    swap(c, d);

    cout << "\nVariables after swapping: \n";
    cout << "a = " << a << '\n';
    cout << "b = " << b << '\n';
    cout << "c = " << c << '\n';
    cout << "d = " << d << '\n';
    
    return 0;
}
