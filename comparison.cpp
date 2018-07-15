#include <iostream>

using namespace std;

int main()
{
    cout << "Enter your first number: " << endl;
    int number1 = 0;
    cin >> number1;

    cout << "Enter your second number: " << endl;
    int number2 = 0;
    cin >> number2;

    bool isEqual = number1 == number2;
    cout << "It is "
            << isEqual
            << " that your first number is equal your second."
            << endl;

    bool isNotEqual = number1 != number2;
    cout << "It is "
            << isNotEqual
            << " that your first number is not equal your second."
            << endl;

    bool isGreater = number1 > number2;
    cout << "It is "
            << isGreater
            << " that your first number is greater than your second."
            << endl;

    bool isGreaterOrEqual = number1 >= number2;
    cout << "It is "
            << isGreaterOrEqual
            << " that your first number is greater than or equal to your second."
            << endl;

    bool isLess = number1 < number2;
    cout << "It is "
            << isLess
            << " that your first number is less than your second."
            << endl;

    bool isLessOrEqual = number1 <= number2;
    cout << "It is "
            << isLessOrEqual
            << " that your first number is less than or equal to your second."
            << endl;

    return 0;
}