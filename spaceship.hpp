#pragma once
#include <raylib.h>
#include "laser.hpp"
#include <vector>

class Spaceship{
    public:
        Spaceship();
        ~Spaceship();
        void Draw();
        void MoveLeft();
        void MoveRight();
        void FireLaser();
        Rectangle getRect();
        void Reset();
        std::vector<Laser> lasers;
        Vector2 position;
        

    private:
        Texture2D image;
        double lastFireTime;
        Sound laserSound;
};