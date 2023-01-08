/* WAP to make a number pyramid using friend function 
 *   1
 *  2 2
 * 3 3 3*/
#include <iostream>

using namespace std;

class Pattern {
    public:
        int rows, start_digit;
        friend void display_pattern(Pattern p);
};

void display_pattern(Pattern p) {
    int line_limit = 2 * p.rows;
    int char_start = line_limit / 2;
    
    for (int i = 0; i < p.rows; i++) {
        int char_count = 0;
        while (char_count < char_start - i) {
                cout << " ";
                char_count++;
        }
        for (int j = 0; j <= i; j++) {
            cout << p.start_digit + i << " ";
        }
        cout << endl;
    }
}

int main() {
    Pattern triangle;
    triangle.rows = 5;
    triangle.start_digit = 1;
    display_pattern(triangle);
    return 0;
}
