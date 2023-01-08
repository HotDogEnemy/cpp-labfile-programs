/*
 * WAP to check whether a person is eligible for voting or not by using a 
 * generic catch statement (catch-all) block which is written as catch(...)
 */
#include <iostream>
using namespace std;

int main() {
    int age;
    
    cout << "Enter your age: ";
    cin >> age;

    try {
        if (age < 18) 
            throw "Underage";
        else if (age > 150)
            throw 2;
        cout << "You are eligible to vote.\n";
    }
    catch (...) {
        cout << "You are not eligible to vote.\n";
    }

    return 0;
}
