#include <iostream>

class Person {
    std::string name;
    int age;
    public:
        Person() {
            std::cout << "Enter name: ";
            std::cin >> name;
            std::cout << "Enter age: ";
            std::cin >> age;
        }
        void display_details();
};

void Person::display_details() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
}

class Student : public Person {
    int rollno;
    int marks[5];
    float percentage=0;
    public:
        Student() {
            std::cout << "Roll no: ";
            std::cin >> rollno;
            std::cout << "Enter marks for 5 subjects: \n";
            for (int i = 0; i < 5; i++) {
                std::cout << "Subject " << i+1 << "  marks: ";
                std::cin >> marks[i];
                percentage += marks[i];
            }
            percentage /= 500;
            percentage *= 100;
        }
        void display_details();
};

void Student::display_details() {
    Person::display_details();
    std::cout << "Roll no: " << rollno << std::endl;
    std::cout << "Marks: \n";
    for (int i = 0; i < 5; i++) {
        std::cout << "Subject " << i+1 << " marks: " << marks[i] << std::endl;
    }
    std::cout << "Percentage: " << percentage << '\n';
}

int main() {
    Student s;
    std::cout << "Student details: \n";
    s.display_details();
    return 0;
}
