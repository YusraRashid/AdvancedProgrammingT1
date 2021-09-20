#include <iostream>
#include "DrawableGameComponent.h"
#include "Game.h"
#include "GameComponent.h"

using namespace std;

void Initialise()
{
    cout << " ------ INITIALISING GAME ------" << endl;
}

void Terminate()
{
    cout << " ------ TERMINATING GAME ------ " << endl;
}

int main()
{
    cout << " ------ WELCOME TO THE GAME ------ " << endl;
    Game game(1);
    game.SetInitialise(Initialise);
    game.SetTerminate(Terminate);

    game.Add(new GameComponent());
    game.Add(new DrawableGameComponent(0, 0));

    game.Run();

    return 0;
}