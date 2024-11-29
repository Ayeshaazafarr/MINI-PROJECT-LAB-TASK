#include <iostream>
using namespace std;

int main() {
    double balance = 1000.0; 
    int choice; 
    double amount;

    do {
        cout << "      ATM Menu   " << endl;
        cout << "1: Check Balance" << endl;
        cout << "2: Withdraw Money" << endl;
        cout << "3: Deposit Money" << endl;
        cout << "4: Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Your current balance is: " << balance << endl;
                break;
            case 2: 
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > balance) {
                    cout << " balance." << balance << endl;
                } else {
                	
                    cout << "Withdraw successful. Your new balance is: " << balance << endl;
                }
                break;
            case 3: 
                cout << "Enter the amount to deposit: ";
                cin >> amount;
                if (amount <= 0 || amount>1000) {
                    cout << "Invalid amount." << endl;
                } else {
                    balance += amount;
                    cout << "Deposit successful. Your new balance is: $" << balance << endl;
                }
                break;
            case 4:
                cout << "ATM work done" << endl;
                break;
            default: 
                cout << "Invalid choice." << endl;
                break;
        }
    } while (choice != 4);

    return 0;
}
