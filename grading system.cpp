#include <iostream>
using namespace std;

int main() {
    int marks;
    char choice;

    do {
        cout << "Enter marks from 0 to 100: ";
        cin >> marks;

        if (marks >= 90 && marks <= 100)
            cout << "You got an A ;)"<<endl;
        else if (marks >= 80)
            cout << "You got a B"<<endl;
        else if (marks >= 70)
            cout << "You got a C"<<endl;
        else if (marks >= 60)
            cout << "You got a D"<<endl;
        else if (marks >= 0)
            cout << "You got an f "<<endl;
        else
            cout << "Invalid marks."<<endl;

        cout << " choose (y/n) to calculate another grade? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
