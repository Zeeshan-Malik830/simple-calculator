#include "calculator.h"

int main() {
    double num1, num2;
    int choice;

    do {
        cout << "\n====== SIMPLE CALCULATOR ======\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 0) {
            cout << "👋 Exiting Calculator. Goodbye!\n";
            break;
        }

        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        switch (choice) {
            case 1: add(num1, num2); break;
            case 2: subtract(num1, num2); break;
            case 3: multiply(num1, num2); break;
            case 4: divide(num1, num2); break;
            default: cout << "❌ Invalid choice! Try again.\n";
        }

    } while (choice != 0);

    return 0;
}
