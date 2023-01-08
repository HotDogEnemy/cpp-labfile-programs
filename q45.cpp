#include <iostream>
#include <stdio.h>
#include <iomanip>

class Date {
    int day, month, year;
    public:
        void set_date();
        void show_date();
};

void Date::set_date() {
    char buffer[11];
    std::cin >> buffer;
    sscanf(buffer, "%d-%d-%d", &day, &month, &year);
}

void Date::show_date() {
    std::cout << day << "-" << month << "-" << year;
}

class Publication {
    std::string pname;
    int pid;
    public: 
        Publication () {
            std::cout << "Enter publisher name: ";
            std::cin >> pname;
            std::cout << "Enter publisher id: ";
            std::cin >> pid;
        }
        virtual void display();
};

void Publication :: display() {
    std::cout << std::left << std::setw(30) << "Publisher name: "
        << pname << '\n';
    std::cout << std::left << std :: setw(30) << "Publisher id: "
        << pid << '\n';
}

class Author {
    std::string name;
    Date dob;
    public:
        Author() {
            std::cout << "Enter author name: ";
            std::cin >> name;
            std::cout << "Enter author DOB (dd-mm-yyyy): ";
            dob.set_date();
        }
        virtual void display();
};

void Author::display() {
    std::cout << std::left << std::setw(30) << "Author name: "
        << name << '\n';
    std::cout << std::left << std::setw(30) << "DOB: ";
    dob.show_date();
    std::cout << '\n';
}

class Book : public Publication, public Author {
    std::string book_title;
    int pagecount, price;
    public:
        Book() {
            std::cout << "Enter book title: ";
            std::cin >> book_title;
            std::cout << "Enter page count: ";
            std::cin >> pagecount;
            std::cout << "Enter price: ";
            std::cin >> price;
        }
        void display();
};

void Book::display() {
    Publication::display();
    std::cout << std::left << std::setw(30) << "Book title: "
        << book_title << '\n';
    std::cout << std::left << std::setw(30) << "Page count: "
        << pagecount << '\n';
    std::cout << std::left << std::setw(30) << "Price: "
        << price << '\n';
    Author::display();
}

class Review : public Book{
    unsigned short int rating;
    public:
        Review() {
            std::cout << "Enter rating (out of 100): ";
            std::cin >> rating;
        }
        void display();
};

void Review::display() {
    Book::display();
    std::cout << std::left << std::setw(30) << "Rating: " << rating << '\n';
}

int main() {
    std::cout << "Enter publisher details: \n";
    Publication p;
    std::cout << "\nEnter author details: \n";
    Author a;
    std::cout << "\nEnter book details: \n";
    Book b;
    std::cout << "\nEnter review details: \n";
    Review r;
    std::cout << "\nPublisher details: \n";
    p.display();
    std::cout << "\nAuthor details: \n";
    a.display();
    std::cout << "\nBook details: \n";
    b.display();
    std::cout << "\nReview details: \n";
    r.display();
    return 0;
}

