#include "DrawableGameComponent.h"

DrawableGameComponent::DrawableGameComponent(int x, int y) : GameComponent(), x(x), y(y) {
    direction = Up;
}

void DrawableGameComponent::ChangeDirection() {
    Direction randDirection;
    do {
        randDirection = (Direction) (rand() % 4);
    } while (randDirection == direction);
        direction = randDirection;
}

void DrawableGameComponent::Draw() {
    switch (direction) {
        case Up:
            currentDirection = "Up";
            break;
        case Down:
            currentDirection = "Down";
            break;
        case Right:
            currentDirection = "Right";
            break;
        case Left:
            currentDirection = "Left";
            break;
    }
    cout << currentDirection << ":  X: " << x << ", Y: " << y << endl;
}

void DrawableGameComponent::CurrentPosition() {
    switch (direction) {
        case Up:
            y++;
            if (y > SCREEN_HEIGHT) {
                y = SCREEN_HEIGHT;
            }
            currentDirection = "Up";
            break;
        case Down:
            y--;
            if (y < 0) {
                y = 0;
            }
            currentDirection = "Down";
            break;
        case Right:
            x++;
            if (x > SCREEN_WIDTH) {
                x = SCREEN_WIDTH;
            }
            currentDirection = "Right";
            break;
        case Left:
            x--;
            if (x < 0) {
                x = 0;
            }
            currentDirection = "Left";
            break;
        default:
            break;
    }
}

void DrawableGameComponent::Update(const tm *eventTime) {
    GameComponent::Update(eventTime);
    CurrentPosition();
    Draw();
    ChangeDirection();
}