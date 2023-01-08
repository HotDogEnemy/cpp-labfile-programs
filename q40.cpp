#include <iostream>

class Emp {
    std::string name;
    int age;
    public:
        int salary_base;
        Emp() {
            std::cout << "Name: ";
            std::cin >> name;
            std::cout << "Age: ";
            std::cin >> age;
            std::cout << "Base salary: ";
            std::cin >> salary_base;
        }
        void show_details();
};

void Emp::show_details() {
    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n";
}

class Salary : protected Emp {
    float pct_hra, pct_dearness, salary_gross, amt_hra, amt_dearness;
    public:
        Salary() {
            std::cout << "Percentage HRA: ";
            std::cin >> pct_hra;
            std::cout << "Percentage dearness: ";
            std::cin >> pct_dearness;
            amt_hra = pct_hra / 100 * salary_base;
            amt_dearness = pct_dearness / 100 * salary_base;
            salary_gross = salary_base + amt_hra + amt_dearness;
        }
        void show_details();
};

void Salary::show_details() {
    Emp::show_details();
    std::cout << "Salary: \n";
    std::cout << "\tBase salary: \t" << salary_base << "\n";
    std::cout << "\tHRA: \t\t" << amt_hra << " (" << pct_hra << "%)\n";
    std::cout << "\tDearness: \t" << amt_dearness << " (" << pct_dearness << "%)\n";
    std::cout << "\t--------------------------------------\n";
    std::cout << "\tGross salary: \t" << salary_gross << '\n';
}

int main() {
    std::cout << "Enter employee details: \n";
    Salary emp;
    std::cout << "\nEmployee details: \n";
    emp.show_details();
    return 0;
}
