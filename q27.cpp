/* WAP to define 2 classes, Emp1 and Emp2
 * Data members: Name, DOJ, Dept, Salary, etc.
 * Member functions: Input and output
 *
 * Display details of employee who has higher salary using friend function as a 
 * bridge
 */

#include <iostream>

using namespace std;

class Emp1;
class Emp2;

class Emp1 {
    string name, dept, doj;
    float salary;
    public:
        Emp1() {
            cout << "Enter employee 1 name: ";
            cin >> name;
            cout << "Enter employee 1 dept: ";
            cin >> dept;
            cout << "Enter employee 1 DOJ: ";
            cin >> doj;
            cout << "Enter employee 1 salary: ";
            cin >> salary;
        }
        void display_details();
        friend void show_higher_salary(Emp1& e1, Emp2& e2);
};

void Emp1::display_details() {
    cout << "\tEmployee name: " << name << endl;
    cout << "\tEmployee dept: " << dept << endl;
    cout << "\tEmployee doj: " << doj << endl;
    cout << "\tEmployee salary: " << salary << endl;
}

class Emp2 {
    string name, dept, doj;
    float salary;
    public:
        Emp2() {
            cout << "Enter employee 2 name: ";
            cin >> name;
            cout << "Enter employee 2 dept: ";
            cin >> dept;
            cout << "Enter employee 2 DOJ: ";
            cin >> doj;
            cout << "Enter employee 2 salary: ";
            cin >> salary;
        }
        void display_details();
        friend void show_higher_salary(Emp1& e1, Emp2& e2);
};

void Emp2::display_details() {
    cout << "\tEmployee name: " << name << endl;
    cout << "\tEmployee dept: " << dept << endl;
    cout << "\tEmployee doj: " << doj << endl;
    cout << "\tEmployee salary: " << salary << endl;
}

void show_higher_salary(Emp1& e1, Emp2& e2) {
    if (e1.salary > e2.salary) {
        cout << "\nEmployee 1 has higher salary! \n";
        e1.display_details();
    } else if (e1.salary < e2.salary) {
        cout << "\nEmployee 2 has higher salary! \n";
        e2.display_details();
    } else {
        cout << "Both salaries are equal!" <<endl;
    }
}

int main() {
    Emp1 e1;
    Emp2 e2;
    show_higher_salary(e1, e2);
    return 0;
}
