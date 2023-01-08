/*
 * WAP to calculate the square root of a given number and handle all the
 * exceptions.
 */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num = 0, sq_root = 0;

    cout << "Enter number to find square root: ";
    cin >> num;

    try {
        if (num < 0) 
            throw "No square root for negative numbers";
        sq_root = sqrt(num);
        cout << "Square root: " << sq_root << '\n';
    }
    catch (const char * err) {
        cerr << "Error: " << err << '\n';
    }
    return 0;
}
