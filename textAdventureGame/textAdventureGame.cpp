#include "Player.h"
#include "GameLoop.h"

int main()
{
    Player player;
    GameLoop::welcomePlayer(player);

    bool isPlaying = true;
    while (isPlaying)
    {
        isPlaying = GameLoop::runGame();
    }

    return 0;
}
