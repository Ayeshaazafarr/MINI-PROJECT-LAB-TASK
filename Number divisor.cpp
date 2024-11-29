#include <iostream>
using namespace std;

int main() {
    int no;
    cout << "Enter a positive number: ";
    cin >> no;

    cout << "Divisor of " << no << ": ";
    for (int i = 1; i <= no; i++) {
        if (no % i == 0)
            cout << i << " ";
    }
    cout << endl;

    return 0;
}
