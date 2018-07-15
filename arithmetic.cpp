#include <iostream>

using namespace std;

int main()
{
    cout << "Enter your first number: " << endl;
    float number1 = 0.0f;
    cin >> number1;

    cout << "Enter your second number: " << endl;
    float number2 = 0.0f;
    cin >> number2;

    float addingResult = number1 + number2;
    cout << "The result of adding your two numbers is "
         << addingResult << endl;

    float subtractingResult = number1 - number2;
    cout << "The result of subtracting your two numbers is "
         << subtractingResult << endl;

    float multiplyingResult = number1 * number2;
    cout << "The result of multiplying your two numbers is "
         << multiplyingResult << endl;

    float dividingResult = number1 / number2;
    cout << "The result of dividing your first number by your second is "
         << dividingResult << endl;

    return 0;
}
