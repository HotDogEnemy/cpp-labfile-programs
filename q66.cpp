/* 
 * WAP to illustrate the functioning of open() and close() function of a file 
*/
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Creating file object
    ofstream fileobj;
    
    // Using open() with file object
    fileobj.open("sample.txt", ios::out);
    fileobj << "This is a line in a text file\n";
    
    // Closing opened file object using close()
    fileobj.close();

    // Creating file object for reading
    ifstream fileobj2;

    // Opening previously written file using open()
    fileobj2.open("sample.txt", ios::in);

    // Checking if file opened correctly
    if (!fileobj2){
        cerr << "Error: File could not be opened for reading.\n";
        return 1;
    }
    
    // Printing file contents
    string buffer;
    cout << "File contents: \n";
    while (fileobj2) {
        getline(fileobj2, buffer);
        cout << buffer;
    }
    cout << '\n';

    // Closing file with close()
    fileobj2.close();
    
    return 0;
}
