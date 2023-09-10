#include <iostream>

using namespace std;


/**

Class:
A class is a blueprint or template for creating objects that have certain properties (attributes) and behaviors (methods or functions).
Classes are a fundamental concept in object-oriented programming (OOP) and are used to model real-world entities or abstract concepts.

**/


// Define a class called 'Car'
class Car {

    private:
        // Member variables (attributes)
        string make;
        string model;
        int year;

    public:
        // Constructor to initialize member variables
        Car(string m, string ml, int y) {
            make = m;
            model = ml;
            year = y;
            cout << "Car object created." << endl;
        }

        // Destructor
        ~Car() {
            cout << "Car object destroyed." << endl;
        }

        // Member function to display car information
        void displayInfo() {
            cout << "Make: " << make << endl;
            cout << "Model: " << model << endl;
            cout << "Year: " << year << endl;
        }

};

int main() {
    // Object instantiation
    Car myCar("Toyota", "Camry", 2023);

    // Call member function to display car information
    myCar.displayInfo();

    // Object will be automatically destroyed when it goes out of scope (end of main)
    return 0;
}
