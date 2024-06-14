#include <iostream>

using namespace std;

double addition(double input1, double input2) {
    return input1 + input2;
}

double subtraction(double input1, double input2) {
    return input1 - input2;
}

double multiplication(double input1, double input2) {
    return input1 * input2;
}

double division(double input1, double input2) {
    if (input2 == 0) {
        cerr << "Error: Division by zero!" << endl;
        return 0;
    }
    return input1 / input2;
}

int main() {
    int choosenNumber;
    double input1, input2;

    cout << "Select the operator:\n";
    cout << "1 addition\n";
    cout << "2 subtraction\n";
    cout << "3 multiplication\n";
    cout << "4 division\n";

    cout << "Enter choosenNumber from 1 to 4: ";
    cin >> choosenNumber;

    cout << "Enter the first number: ";
    cin >> input1;

    cout << "Enter the second number: ";
    cin >> input2;

    switch (choosenNumber) {
        case 1:
            cout << "Result: " << addition(input1, input2) << endl;
            break;
        case 2:
            cout << "Result: " << subtraction(input1, input2) << endl;
            break;
        case 3:
            cout << "Result: " << multiplication(input1, input2) << endl;
            break;
        case 4:
            cout << "Result: " << division(input1, input2) << endl;
            break;
        default:
            cout << "Invalid input" << endl;
            break;
    }

    return 0;
}
