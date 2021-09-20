#pragma once
#include <ctime>
#include <iostream>
#include <iomanip>

using namespace std;

class GameComponent {
private:
    int id;
    static int instances;

public:
    GameComponent();
    virtual void Update(const tm *time);
};