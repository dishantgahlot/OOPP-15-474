#include <bits/stdc++.h>
using namespace std;

class BankAccount {
private:
    // data hiding: these can't be touched directly from outside the class
    string accountHolder;
    string accountNumber;
    double balance;

public:
    // constructor
    BankAccount(string name, string accNo, double initialBalance = 0.0) {
        accountHolder = name;
        accountNumber = accNo;
        if (initialBalance < 0) {
            cout << "Initial balance cannot be negative. Setting to 0." << endl;
            balance = 0.0;
        } else {
            balance = initialBalance;
        }
    }

    // deposit function
    void deposit(double amount) {
        if (amount <= 0) {
            cout << "Deposit amount must be positive." << endl;
            return;
        }
        balance += amount;
        cout << "Deposited: " << amount << " | New Balance: " << balance << endl;
    }

    // withdraw function
    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Withdrawal amount must be positive." << endl;
            return;
        }
        if (amount > balance) {
            cout << "Insufficient balance! Current balance: " << balance << endl;
            return;
        }
        balance -= amount;
        cout << "Withdrawn: " << amount << " | New Balance: " << balance << endl;
    }

    // getter — read-only access to balance (no direct modification allowed)
    double getBalance() const {
        return balance;
    }

    // display account info
    void displayInfo() const {
        cout << "\n--- Account Info ---" << endl;
        cout << "Holder: " << accountHolder << endl;
        cout << "Account No: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "--------------------\n" << endl;
    }
};

int main() {
    BankAccount acc("Dishant", "AC1001", 1000.0);

    acc.displayInfo();

    acc.deposit(500);
    acc.withdraw(200);
    acc.withdraw(5000);  // should fail — insufficient balance
    acc.deposit(-50);    // should fail — invalid amount

    acc.displayInfo();

    // acc.balance = 999999;  // ERROR if uncommented — balance is private, can't access directly

    return 0;
}