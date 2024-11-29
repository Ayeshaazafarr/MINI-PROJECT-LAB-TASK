#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int no;
    cout << "Enter a positive integer: ";
    cin >> no;

    cout << setw(10)<<"Number"<<setw(5)<<"Square"<<setw(5)<<"Cube"<<endl;
    for (int i = 1; i <= no; i++) {
        cout<<setw(5)<<i<<setw(5)<< i * i << setw(5) << i * i * i << endl;
    }

    return 0;
}
