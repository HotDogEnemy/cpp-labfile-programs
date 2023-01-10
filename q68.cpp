/* WAP to illustrate working with multiple files using open(), read(), and 
 * write() functions. */
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Opening file for reading
    ifstream readfile;
    readfile.open("readfile.txt");

    // Opening file for writing
    ofstream writefile;
    writefile.open("writefile.txt");

    if (!readfile) {
        cerr << "Error: Input file readfile.txt is missing.\n";
    }

    char buf[1];

    while (readfile.read(buf, 1)) {
        writefile.write(buf, 1);
    }

    cout << "Successfully copied readfile.txt to writefile.txt!\n";
    return 0;
}
