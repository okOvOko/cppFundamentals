#include <iostream>

using namespace std;

int main()
{
    unsigned int first = 0x0F;
    unsigned int second = 0x18;
    unsigned int anded = first & second;
    unsigned int ored = first | second;
    unsigned int xored = first ^ second;
    unsigned int leftShifted = first << 1;
    unsigned int rightShifted = first >> 1;

    cout << hex << showbase;
    cout << "first: " << first << endl;
    cout << "second: " << second << endl;
    cout << "first & (AND) second: " << anded << endl;
    cout << "first | (OR) second: " << ored << endl;
    cout << "first ^ (Exclusive OR/XOR) second: " << xored << endl;
    cout << "first << 1: " << leftShifted << endl;
    cout << "first >> 1: " << rightShifted << endl;
    cout << "right shift " << -16 << ": " << (-16 >> 1) << endl;

    return 0;
}