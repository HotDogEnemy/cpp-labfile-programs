/*
 * WAP to illustrate how an exception is handled using try-catch block and 
 * throw statements.
 */
#include <iostream>
using namespace std;

int main() {
    cout << "Statement before the try-catch blocks\n";
    try {
        cout << "Statement inside the try block.\n";
        throw "demo error";
        cout << "Statement after the throw statement\n"; // this will not be executed
    }
    catch (const char * error) {
        cerr << "Error: " << error << '\n';
    }
    cout << "Statement after try-catch blocks\n";
    return 0;
}
