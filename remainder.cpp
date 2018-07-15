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

    int remainder = number1 % number2;
    cout << "The remainder from dividing your first number into your first is "
         << remainder << endl;

    return 0;
}
