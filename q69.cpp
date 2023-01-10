/* WAP to create a file and count the number of characters and digits in that 
 * file. */
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int num_check(char c) {
    if ((48 <= c) && (c <= 57)) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    ofstream file_write("test.txt", ios::out);
    string text = "The quick brown fox jumped over the lazy little dog.\n"
    "The earth is 150,000,000 km away from the sun! \n"
    "There are 30,000,000,000,000 cells in the human body on average.\n";
    
    file_write << text;
    file_write.close();

    ifstream file_read("test.txt", ios::in);

    if (!file_read) {
        cerr << "Error: File cannot be opened for reading.\n";
    }
    
    char ch;
    int num_count = 0, character_count = 0;

    cout << "File contents: \n";
    while (file_read.get(ch)) {
        if (num_check(ch)) {
            num_count++;
        }
        else {
            character_count++;
        }
        cout << ch;
    }

    cout << "\nSymbol count:\n";
    cout << setw(15) << left << "Digits: " << right <<setw(4) << num_count << '\n';
    cout << setw(15) << left << "Characters: " << right << setw(4) <<
        character_count << '\n';

    return 0;
}
