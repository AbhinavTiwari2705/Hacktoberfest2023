#include <iostream>
using namespace std;

int main() {
    // Declare variables for weight and height
    double weight, height;

    // Prompt the user for weight and height
    cout << "Enter your weight in kilograms: ";
    cin >> weight;
    cout << "Enter your height in meters: ";
    cin >> height;

    // Calculate BMI
    double bmi = weight / (height * height);

    // Display the result
    cout << "Your BMI is: " << bmi << endl;

    // Interpret the result
    if (bmi < 18.5) {
        cout << "You are underweight." << endl;
    } else if (bmi < 24.9) {
        cout << "You have a healthy weight." << endl;
    } else if (bmi < 29.9) {
        cout << "You are overweight." << endl;
    } else {
        cout << "You are obese." << endl;
    }

    return 0;
}
