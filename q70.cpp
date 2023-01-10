/* WAP to implement command line arguments */
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char * argv[]) {
    if (argc != 2) {
        cout << "Usage: " << argv[0] << " <filename>";
    }

    ifstream readfile(argv[1]);

    if (!readfile) {
        cerr << "Error: Cannot open file " << argv[1] << " for reading.\n";
        return 1;
    }
    
    string buf;

    cout << "Contents of " << argv[1] << ": \n";

    while (getline(readfile, buf)) {
        cout << buf;
        if (readfile.good())
            cout << '\n';
    }

    return 0;
}
