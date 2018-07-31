#include <iostream>

#include "GameLoop.h"

using namespace std;

namespace GameLoop
{
    void welcomePlayer(Player& player)
    {
        cout << "Welcome to Text Adventure!" << endl << endl;
        cout << "What is your name?" << endl << endl;

        string name;
        cin >> name;
        player.setName(name);

        cout << endl << "Hello " << player.getName() << endl;
    }

    void givePlayerOptions()
    {
        cout <<
        "What would you like to do? (Enter a corresponding number)"
        << endl << endl;
        cout << "1: Quit" << endl << endl;
    }

    void getPlayerInput(string& playerInput)
    {
        cin >> playerInput;
    }

    PlayerOptions evaluateInput(string& playerInput)
    {
        PlayerOptions chosenOption = PlayerOptions::None;

        if (playerInput.compare("1") == 0)
        {
            cout << "You have chosen to Quit!" << endl << endl;
            chosenOption = PlayerOptions::Quit;
        }
        else
        {
            cout << "I do not recognize that option, try again!"
                << endl << endl;
        }

        return chosenOption;
    }

    bool runGame()
    {
        bool shouldEnd = false;

        givePlayerOptions();

        string playerInput;
        getPlayerInput(playerInput);

        shouldEnd = evaluateInput(playerInput) == PlayerOptions::Quit;

        return !shouldEnd;
    }
}