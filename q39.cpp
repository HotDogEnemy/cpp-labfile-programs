#include <iostream>

class Student {
    std::string name;
    int rollno, age;
    protected:
        int marks[5];
    public:
        Student() {
            std::cout << "Name: ";
            std::cin >> name;
            std::cout << "Age: ";
            std::cin >> age;
            std::cout << "Roll no: ";
            std::cin >> rollno;
            std::cout << "Marks: ";
            for (int i = 0; i < 5; i++) {
                std::cout << "\tSubject " << i+1 << " marks: ";
                std::cin >> marks[i];
            }
        }
        void display_details();
};

void Student::display_details() {
    std::cout << "Student details: \n";
    std::cout << "Name: " << name << std::endl;
    std::cout << "Roll no: " << rollno << std::endl;
    std::cout << "Marks: \n";
    for (int i = 0; i < 5; i++) {
        std::cout << "\tSubject " << i+1 << " marks: " << marks[i] << std::endl;
    }
}

class AvgMks : public Student {
    float average;
    public:
        AvgMks() {
            for (int i = 0; i < 5; i++) {
                average += marks[i];
            }
            average /= 5;
        }
        void display_details();
};

void AvgMks::display_details() {
    Student::display_details();
    std::cout << "Average Marks: " << average << std::endl;
}

int main() {
    AvgMks st1;
    std::cout << std::endl;
    st1.display_details();
    return 0;
}
