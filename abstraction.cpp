#include <iostream>
using namespace std;

class Parent {
	// private member variable
	int x;

    public:
        // pure virtual function
        virtual void show() = 0;

        int getX() {
            return x;

            }

};



class Child : public Parent {
	int y;

    public:
        // implementation of the pure virtual function
        void show() { cout << "Pure virtual called"; }
    };

int main(void)
{
	// creating an object of Child class
	Child d;

	// calling the show() function of Child class
	d.show();

	return 0;
}
