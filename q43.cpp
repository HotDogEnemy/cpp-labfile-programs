#include <iostream>
#include <iomanip>

class Hospital {
    std::string name, location;
    public:
        Hospital() {
            std::cout << "Enter hospital name: ";
            std::cin >> name;
            std::cout << "Enter hospital location: ";
            std::cin >>location;
        }
        void display_details();
};

void Hospital::display_details() {
    std::cout << std::left << std::setw(30) << "Hospital: " << name << '\n';
    std::cout << std::left << std::setw(30) << "Location: " << location << '\n';
}

class Doctor {
    std::string dname, specialization;
    public:
        Doctor() {
            std::cout << "Enter doctor's name: ";
            std::cin >> dname;
            std::cout << "Enter doctor specialization: ";
            std::cin >> specialization;
        }
        void display_details();
};

void Doctor::display_details() {
    std::cout << std::left << std::setw(30) << "Doctor: Dr. " << dname << '\n';
    std::cout << std::left << std::setw(30) << "Doctor sepcialization: " 
        << specialization << '\n';
}

class Patient {
    int pno, billno;
    std::string disease, dateofadmission, dateofdischarge;
    public:
        Patient() {
            std::cout << "Enter patient no: ";
            std::cin >> pno;
            std::cout << "Enter disease: ";
            std::cin >> disease;
            std::cout << "Enter date of admission: ";
            std::cin >> dateofadmission;
            std::cout << "Enter date of discharge: ";
            std::cin >> dateofdischarge;
            std::cout << "Enter bill no.: ";
            std::cin >> billno;
        }
        void display_details();
};

void Patient::display_details() {
    std::cout << std::left << std::setw(30) << "Patient no.: " << pno << '\n';
    std::cout << std::left << std::setw(30) << "Disease: " << disease << '\n';
    std::cout << std::left << std::setw(30) << "Date of admission: "
        << dateofadmission << '\n';
    std::cout << std::left << std::setw(30) << "Date of discharge: "
        <<dateofdischarge << '\n';
    std::cout << std::left << std::setw(30) << "Bill no: " << billno << '\n';
}

class Record : protected Hospital, protected Doctor, protected Patient{
    public:
        void display_details();
};

void Record::display_details() {
    std::cout << std::right << std::setw(30) << "Patient details: \n";
    Hospital::display_details();
    Doctor::display_details();
    Patient::display_details();
}


int main() {
    Record r1;
    std::cout << '\n';
    r1.display_details();
    return 0;
}
