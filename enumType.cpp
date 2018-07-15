#include <iostream>
#include <string>

using namespace std;

enum class Color
{
    Red,
    Green = 20,
    Blue // == 21
};

enum Color2
{
    Red,
    Green = 10,
    Blue, // == 11
};

enum class TrafficLights
{
    Red,
    Amber,
    Green = 10
};

int main() {
    Color currentColor = Color::Red;
    Color2 color2 = Green;

    Color greenC = Color::Green;
    TrafficLights greenT = TrafficLights::Green;

    //if (greenT == greenC) cout << "Names are the same" << endl; // error

    cout << "Color: " << static_cast<int>(currentColor) << endl;
    cout << "Color2: " << color2 << endl;

    // if (currentColor == 0) cout << "Oops" << endl; // error

    return 0;
}
