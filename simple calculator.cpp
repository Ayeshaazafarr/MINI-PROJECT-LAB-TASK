#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2;

    do {
        cout << "     Calculator    "<<endl;
        cout << "1. Addition"<<endl;
        cout << "2. Subtraction"<<endl;
        cout << "3. Multiplication"<<endl;
        cout << "4. Division"<<endl;
        cout << "5. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }

        switch (choice) {
            case 1: cout << "Result: " << num1 + num2 << endl; break;
            case 2: cout << "Result: " << num1 - num2 << endl; break;
            case 3: cout << "Result: " << num1 * num2 << endl; break;
            case 4:
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "ERROR."<<endl;
                break;
            case 5:
                cout << "Exit "<<endl;
                break;
            default:
                cout << "Invalid choice."<<endl;
        }
    } while (choice != 5);

    return 0;
}
