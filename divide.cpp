#include "calculator.h"

double divide(double a, double b) {
    if (b == 0) {
        cout << "❌ Error: Division by zero!" << endl;
        return 0;
    }
    double result = a / b;
    cout << "✅ Result: " << result << endl;
    return result;
}
