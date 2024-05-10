#include <iostream>
using namespace std;

int division(unsigned short int a, unsigned short int b) {
    if (b == 0) {
        return -1; 
    }
    else {
        return a / b; 
    }
}

int main() {
    unsigned short int number1, number2;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;

    int result = division(number1, number2); 
    if (result == -1) {
        cout << "Error: Division by zero is not allowed." << endl;
    }
    else {
        cout << "Result of division: " << result << endl;
    }

    return 0;
}
