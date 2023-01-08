/*
 * WAP to overload binary '+' operator to concatenate two string objects of
 * user defined class string.
 */
#include <iostream>
#include <string.h>

using std::cout;

class string {
    char str[50];
    int length;
    public:
        string() : str{'\0'}, length{0} { }
        string(const char * s) {
            if (strlen(s) > 50) {
                cout << "String overload!\n";
                exit(1);
            }
            strncpy(str, s, 50);
            length = strlen(s);
        }
        string(string& obj) {
            strncpy(str, obj.str, 50);
            length = obj.length;
        }
        char * get_str() {
            return str;
        }
        string& operator + (string s);
};

string& string::operator + (string s) {
    if (length + s.length > 50) {
        cout << "String overload!\n";
        exit(1);
    }
    strcat(str, s.str);
    return *this;
}

int main() {
    string s1("Hello "), s2("World!");
    
    cout << "s1 = " << s1.get_str() << '\n';
    cout << "s2 = " << s2.get_str() << '\n';

    string result = s1 + s2;

    cout << "s1 + s2 = " << result.get_str() << '\n';

    return 0;
}


