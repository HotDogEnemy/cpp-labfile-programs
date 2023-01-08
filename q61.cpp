/*
 * WAP to demonstrate exception specification
 */
#include <iostream>
using namespace std;

int except_specific(int x) throw (int,double) {
    if (x == 1)
        throw 1;
    else if (x == 2)
        throw 1.0;
    return 0;
}

int main() {
    try {
        except_specific(1);
    }
    catch (char x) {
        cout << "Caught character: " << x << '\n';
    }
    catch (int x) {
        cout << "Caught integer: " << x << '\n';
    }
    catch (double x) {
        cout << "Caught double: " << x << '\n';
    }
    cout << "Program terminated.\n";
    return 0;
}
