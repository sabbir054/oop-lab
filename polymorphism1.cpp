#include <bits/stdc++.h>

using namespace std;


//function overloading

class Myclass {
    public:
        // print with 1 int parameter
        void print(int x)
        {
            cout << "value of x is " << x << endl;
        }

        // 2 int parameters
        void print(int x, int y)
        {
            cout << "value of x and y is " << x << ", " << y
                 << endl;
        }


};



// Driver code
int main()
{
    Myclass obj1;
    // on the parameters passed
    // print() is called with int value
    obj1.print(7);

    // print() is called with 2 int values
    obj1.print(85, 64);
    return 0;
}
