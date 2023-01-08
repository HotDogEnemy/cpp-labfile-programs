#include <iostream>
#include <stdio.h>
using namespace std;

class DOB {
    int year, month, day;
    public:
        DOB(int year, int month, int day) {
            this->day = day;
            this->month = month;
            this->year = year;
        }
        void display() {
            cout << year << "-" << month << "-" << day << '\n';
        }
};

class Employee {
    string name;
    DOB *birthdate;
    public:
        Employee(string name, string birth) {
            this->name = name;
            int year, month, day;
            sscanf(birth.c_str(), "%d-%d-%d", &year, &month, &day);
            this->birthdate = new DOB(year, month, day);
        }
        void display() {
            cout << "Employee name: " << name << '\n';
            cout << "Birthdate: ";
            birthdate->display();
        }
        ~Employee() {
            delete birthdate;
        }
};

int main() {
    Employee emp("Mark Hammond", "1990-12-30");
    emp.display();
    return 0;
}
