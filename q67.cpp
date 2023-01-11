/* WAP to illustrate stream functions put() and get() */
#include <iostream>

using namespace std;

int main() {
    // Get characters one by one from input using get()
    // and print them using put()
    char ch;
    while (cin.get(ch)) {
        cout.put(ch);
        // Break out of loop if newline encountered
        if (ch == '\n') {
            break;
        }
    }
    return 0;
}
