#include <bits/stdc++.h>
using namespace std;

class Calculator {
private:
    double a, b;
    string operation;

public:
    Calculator(double a, double b, string operation) {
        this->a = a;
        this->b = b;
        this->operation = operation;
    }

    void calculate() {
        if (operation == "add" || operation == "+") {
            cout << "Result: " << a + b << endl;
        } else if (operation == "subtract" || operation == "-") {
            cout << "Result: " << a - b << endl;
        } else if (operation == "multiply" || operation == "*") {
            cout << "Result: " << a * b << endl;
        } else if (operation == "divide" || operation == "/") {
            if (b != 0) {
                cout << "Result: " << a / b << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
        } else {
            cout << "Invalid operation type." << endl;
        }
    }
};

int main() {
    double a, b;
    string operation;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Enter operation (add, subtract, multiply, divide or +, -, *, /): ";
    cin >> operation;

    Calculator calc(a, b, operation);
    calc.calculate();

    return 0;
}
