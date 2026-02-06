#include <iostream>
using namespace std;

// Function to add two numbers
double add(double a, double b) {
    return a * b;
}

int main() {
    // Variables to store input values
    double num1, num2;

    // Prompt user to enter first number
    cout << "Enter the first number: ";
    cin >> num1;

    // Prompt user to enter second number
    cout << "Enter the second number: ";
    cin >> num2;

    // Calculate sum using function
    double result = add(num1, num2);

    // Output the result
    cout << "The sum is: " << result << endl;

    return 0;
}