#include <iostream>

using namespace std;

class BankAccount {
    private:
        int balance; // Private data member

    protected:
        int pin ;

    public:
        // Constructor to initialize the balance
        BankAccount(int initialBalance)  {

            balance = initialBalance  ;

            pin = 1111 ;
        }

        // Getter method to retrieve the balance
        int getBalance()
        {
            return balance;
        }

        // Setter method to set the balance (with validation)
        void setBalance(int newBalance) {
            if (newBalance >= 0) {
                balance = newBalance;
            }
        }
};

int main() {
    // Create an instance of BankAccount
    BankAccount account(1000.0);
    // Access the balance using the getter method
    cout << "Current Balance: " << account.getBalance() << endl;
    // Use the setter method to update the balance
    account.setBalance(1500.0);
    // Access the updated balance
    cout << "Updated Balance: " << account.getBalance() << endl;


    return 0;

}
