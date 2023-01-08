#include <iostream>

class student {
    int rollno;
    std::string name;
    public:
        student (int rollno, std::string name) {
            /* Here, this keyword helps distinguish between parameters 
             * and class data members. */
            this->rollno = rollno;
            this->name = name;
        }
        void display_details();
};

void student::display_details() {
    std::cout << "Student name: " << name << std::endl;
    std::cout << "Roll no: " << rollno << std::endl;
}

int main() {
    student s(23, "Mark");
    std::cout << "Details of created object: " << std::endl;
    s.display_details();    
    return 0;
}
