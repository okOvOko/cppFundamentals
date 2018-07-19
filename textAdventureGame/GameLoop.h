#pragma once

#include "Player.h"
#include "PlayerOptions.h"

namespace GameLoop
{
    void welcomePlayer(Player& player);

    void givePlayerOptions();

    void getPlayerInput(std::string& playerInput);

    PlayerOptions evaluateInput(std::string& playerInput);

    bool runGame();
}