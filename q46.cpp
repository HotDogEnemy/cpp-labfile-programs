#include <iostream>

class grandparent {
    int a;
    public:
        grandparent(): a(0) { }
        void set_var(int a) {
            this->a = a;
        }
        int read_var() {
            return a;
        }
};

class parent1 : virtual public grandparent {
    public:
        parent1() {
            set_var(10);           
        }
};

class parent2 : virtual public grandparent {
    public:
        parent2() {
            set_var(35555);
        }
};

class child : public parent1, public parent2 {
};

int main() {
    child obj;
    std::cout << "Value of variable in child class is: " << obj.read_var() <<'\n';
    return 0;
}
