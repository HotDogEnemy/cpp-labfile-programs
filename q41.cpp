#include <iostream>

class Person {
    std::string name;
    public:
        Person(std::string name) {
            this->name = name;
        }
        friend void display_name(Person& pp);
};

void display_name(Person& p) {
    std::cout << "Name: " << p.name << '\n';
}

class Student : public Person {
    int rollno;
    public:
        Student(std::string name, int rollno) : Person(name) {
            this->rollno = rollno;
        }
        void display_rollno();
};

void Student::display_rollno() {
    std::cout << "Rollno: " << rollno << '\n';
}

int main() {
    Person p("Ryan");
    Student s("Mark", 25);
    std::cout << "Person class: \n";
    display_name(p);
    std::cout <<"\nStudent class: \n";
    display_name(s);
    s.display_rollno();
    return 0;
}
