#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Account class representing a bank account
class Account {
private:

// initialize variables for account holder name, account number, balance and pin

public:
    // Constructor to initialize account details
    Account() {}

    // Display account information
    void displayAccount() {}

    // Verify the entered PIN
    bool pinVerify() {}

    // Deposit funds into the account
    void deposit() {}

    // Withdraw funds from the account
    bool withdraw() {} // check if balance is larger than requested withdraw amount

    // Delete the account
    void deleteAccount() {}

    // method to get the account number
    int getAccountNo() {}

    // method to get the PIN
    int getPin() {}
};

// Function to find the index of an account based on account number
int locateAccount() {} // make sure to handle if account not found

// Main function
int main() {
    // declare and initialize variables

    // Main program loop
    do {
        // Display menu options

        // Switch statement to handle user choices
        switch (choice) {
            case 1:
                // Create a new account
            case 2:
                // Display account information
            case 3:
                // Deposit funds into the account
            case 4:
                // Withdraw funds from the account
            case 5:
                // Delete an account
            case 6:
                // exit the application
        }

    } while (choice != 6);

    return 0;
}

