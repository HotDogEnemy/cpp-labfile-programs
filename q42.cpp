#include <iostream>

class Person {
    protected:
        std::string name;
        int age;
    public:
        Person(std::string name, int age) {
            this->name = name;
            this->age = age;
        }
        void display();
};

void Person::display() {
    std::cout << "Name: " << name << '\n';
    std::cout << "Age: " << age << '\n';
}

class Faculty : protected Person {
    std::string dept;
    int salary;
    public:
        Faculty (std::string name, int age, std::string dept, int salary) : Person(name, age) {
            this->dept = dept;
            this->salary = salary;
        }
        void display();
};

void Faculty::display() {
    Person::display();
    std::cout << "Department: " << dept << '\n';
    std::cout << "Salary: " << salary << '\n';
}

class Student : protected Person {
    std::string course;
    int rollno;
    public:
        Student (std::string name, int age, std::string course, int rollno) : Person(name, age) {
            this->course = course;
            this->rollno = rollno;
        }
        void display();
};

void Student::display() {
    Person::display();
    std::cout << "Course: " << course << '\n';
    std::cout << "Roll no: " << rollno << '\n';
}

int main() {
    Person p("Alice", 22);
    Faculty f("Bob", 44, "Computer Science", 50000);
    Student s("Oscar", 19, "BCA", 94);
    std::cout << "Person details: \n";
    p.display();
    std::cout << "\nFaculty details: \n";
    f.display();
    std::cout << "\nStudent details: \n";
    s.display();
    return 0;
}
