#pragma once
#include <string>
#include "GameComponent.h"

class DrawableGameComponent : public GameComponent {
public:
    enum Direction : unsigned char {
        Up = 1, Down = 2, Left = 3, Right = 4
    };
    Direction direction;
    DrawableGameComponent(int x, int y);
    const int SCREEN_HEIGHT = 20;
    const int SCREEN_WIDTH = 80;
    void Update(const tm *eventTime);
private:
    void ChangeDirection();
    void Draw();
    int x;
    int y;
    void CurrentPosition();
    string currentDirection;
};