#include <iostream>
using namespace std;

int main() {
    double balance = 10000.00;
    int choice;
    double amount;

    while (true) {
        cout << "\n=============================\n";
        cout << "        ATM SIMULATION\n";
        cout << "=============================\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nCurrent Balance: Rs. " << balance << "\n";
                break;

            case 2:
                cout << "Enter deposit amount: Rs. ";
                cin >> amount;

                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit successful.\n";
                    cout << "Updated Balance: Rs. " << balance << "\n";
                } else {
                    cout << "Invalid deposit amount.\n";
                }
                break;

            case 3:
                cout << "Enter withdrawal amount: Rs. ";
                cin >> amount;

                if (amount <= 0) {
                    cout << "Invalid withdrawal amount.\n";
                } else if (amount > balance) {
                    cout << "Insufficient balance.\n";
                } else {
                    balance -= amount;
                    cout << "Withdrawal successful.\n";
                    cout << "Updated Balance: Rs. " << balance << "\n";
                }
                break;

            case 4:
                cout << "\nThank you for using the ATM simulation.\n";
                return 0;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
