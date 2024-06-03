#include <iostream>
using namespace std;

int main() {
    char choice;
    do {
        float num1, num2;
        char op;

        cout << "Enter first number, operator, and second number: ";
        cin >> num1 >> op >> num2;

        switch (op) {
            case '+':
                cout << "Answer = " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Answer = " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Answer = " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0)
                    cout << "Answer = " << num1 / num2 << endl;
                else
                    cout << "Error! Division by zero." << endl;
                break;
            default:
                cout << "Invalid operator!" << endl;
        }

        cout << "Do another (Y/N)? ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    return 0;
}
