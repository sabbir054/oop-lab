#include <iostream>
using namespace std;

// virtual function

class Myclass {

    public:
        // virtual function
        virtual void display()
        {
            cout << "Called virtual Base Class function" <<endl;
        }

        void print()
        {
            cout << "Called Myclass print function"<<endl;
        }
};

// Declaring a Child Class
class ChildClass : public Myclass {

    public:
        void display()
        {
            cout << "Called ChildClass Display Function"<<endl;
        }

        void print()
        {
            cout << "Called ChildClass print Function"<<endl;
        }

};

// Driver code
int main()
{
	Myclass* base;

	ChildClass child;

	base = &child;

	// This will call the virtual function
	base -> display();

	// this will call the non-virtual function
	base -> print();


}
