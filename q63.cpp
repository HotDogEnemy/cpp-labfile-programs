/*
 * WAP to calculate the minimum of two and three numbers of any data type using
 * the concept of templates.
 */
#include <iostream>
using namespace std;

template<typename T, typename U>
auto get_min(T a, U b) {
    return a < b ? a : b;
}

template<typename T, typename U, typename V>
auto get_min(T a, U b, V c) {
    if (a < c) 
        return a < b ? a : b;
    else
        return c < b ? c : b;
}

int main() {
    cout << "Min of 1.6, 2.5, -6.5: " << get_min(1.6, 2.5, -6.5) << endl;
    cout << "Min of 10, 8.9: " << get_min(10, 8.9) << endl;
    return 0;
}
