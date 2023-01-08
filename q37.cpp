#include <iostream>

class example {
    int num;
    std::string str;
    public:
        example(int num, std::string str) {
            this->num = num;
            this->str = str;
        }
        example * increment_return();
        void display_data();
};

example * example::increment_return() {
    num += 1;
    return this;
}

void example::display_data() {
    std::cout << "Num = " << num << std::endl;;
    std::cout << "Str = " << str << std::endl;;
}

int main() {
    example a(5, "ABC");
    std::cout << "Original class: " << std::endl;
    a.display_data();
    example *b = a.increment_return();
    std::cout << "Class copied through return: " << std::endl;
    b->display_data();
    return 0;
}
