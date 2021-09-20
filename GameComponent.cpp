#include "GameComponent.h"

int GameComponent::instances;

GameComponent::GameComponent() {
    id = ++instances;
//    GameComponent::instances++;
//    id = instances;
}

void GameComponent::Update(const tm *time) {
    cout << "ID : " << id << ", Updated @ " << put_time(time, "%X") << endl;
}