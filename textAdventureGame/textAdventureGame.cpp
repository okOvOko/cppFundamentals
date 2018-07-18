#include <iostream>
#include <string>

using namespace std;

struct Player
{
    string m_name;
};

void welcomePlayer(Player& player)
{
    cout << "Welcome to Text Adventure!" << endl << endl;
    cout << "What is your name?" << endl << endl;

    string playerName;
    cin >> playerName;

    cout << endl << "Hello " << playerName << endl;
}

int main()
{
    Player player;
    welcomePlayer(player);

    return 0;
}
