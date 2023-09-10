#include <iostream>

using namespace std;


// Base class
class Animal {
    private:
        string name;

    public:
        Animal(const string& name) : name(name) {}

        void eat() {
            cout << name << " is eating." << endl;
        }

        void makeSound() {
            cout << name << " makes a generic animal sound." << endl;
        }


};

// Derived class (Single Inheritance)
class Dog : public Animal {
    public:
        Dog(const string& name) : Animal(name) {}

        void fetch() {
            cout << "Fetching the ball!" << endl;
        }

        // Polymorphism
        void makeSound() {
            cout << "Woof! Woof!" << endl;
        }
};

// Another derived class (Multiple Inheritance)
class Bird {

    private:
        string name;
    public:
        Bird(const string name) : name(name) {}

        void fly() {
            cout << name << " is flying." << endl;
        }


};



class Parrot : public Animal, public Bird {
    public:
        Parrot(const string& name) : Animal(name), Bird(name) {}

        void makeSound() {
            cout << "Polly wants a cracker!" << endl;
        }
};

int main() {
    // Single Inheritance
    Dog myDog("Buddy");
    myDog.eat();
    myDog.makeSound();
    myDog.fetch();

    // Multiple Inheritance
    Parrot myParrot("Polly");
    myParrot.eat();
    myParrot.makeSound();
    myParrot.fly();

    return 0;


}
