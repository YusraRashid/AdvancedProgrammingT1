#include <thread>
#include "Game.h"

Game::Game(int maxComponents) {}

void Game::Add(GameComponent *gameComponent) {
    components[componentCount++] = gameComponent;
}

void Game::SetInitialise(FP init) {
    initialise = init;
}

void Game::SetTerminate(FP term) {
    terminate = term;
}

void Game::Run() {
    initialise();

    int maxUpdates = 5;
    for(int i = 0; i < maxUpdates; i++) {
       for(int j = 0; j < componentCount; j++) {
           auto currentTime = chrono::system_clock::now();
           auto currentTimeFormatted = chrono::system_clock::to_time_t(currentTime);
           tm *time = localtime(&currentTimeFormatted);
           components[j]->Update(time);
        }
        this_thread::sleep_for(chrono::milliseconds(TICKS_1000MS));
    }
    terminate();
}