/* 
 * WAP to demonstrate pure virtual function
 * Create three classes Vehicle, Car and Bus in such a way that Bus and Car
 * are derived from the Vehicle class. Write the class implementation where
 * Vehicle will have only pure virtual function.
 */
#include <iostream>

using namespace std;

class Vehicle {
    public:
        virtual void start_engine() = 0;
        virtual void stop_engine() = 0;
        virtual void drive() = 0;
        virtual void stop_driving() = 0;
};

class Car : public Vehicle {
    public:
        void start_engine();
        void stop_engine();
        void drive();
        void stop_driving();
};

void Car::start_engine() {
    cout << "Car engine started!\n";
}

void Car::stop_engine() {
    cout << "Car engine stopped.\n";
}

void Car::drive() {
    cout << "Driving car.\n";
}

void Car::stop_driving() {
    cout << "Stopped driving car.\n";
}

class Bus : public Vehicle {
    public:
        void start_engine();
        void stop_engine();
        void drive();
        void stop_driving();
};

void Bus::start_engine() {
    cout << "Bus engine started!\n";
}

void Bus::stop_engine() {
    cout << "Bus engine stopped.\n";
}

void Bus::drive() {
    cout << "Driving bus.\n";
}

void Bus::stop_driving() {
    cout << "Stopped driving bus.\n";
}

int main() {
    Car c;
    Bus b;

    cout << "CAR:\n";
    c.start_engine();
    c.drive();
    c.stop_driving();
    c.stop_engine();

    cout << "BUS:\n";
    b.start_engine();
    b.drive();
    b.stop_driving();
    b.stop_engine();
    
    return 0;
}
