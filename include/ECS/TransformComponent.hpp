#pragma once

#include "ECS.hpp"
#include "Vector2D.hpp"

class TransformComponent : public Component {
public:

    Vector2D position;
    Vector2D velocity;

    int height {32};
    int width {32};
    int scale {1};

    int speed {3};

    TransformComponent() {
        position.Zero();
    }

    TransformComponent(int sc) {
        position.Zero();
        scale = sc;
    }

    TransformComponent(int x, int y) {
        position.x = x;
        position.y = y;
    }

    TransformComponent(float x, float y, int h, int w, int s) {
        position.x = x;
        position.y = y;
        height = h;
        width = w;
        scale = s;
    }

    int x() { return position.x; }

    int y() { return position.y; }

    void init() override {
        velocity.x = 0;
        velocity.y = 0;
    }

    void update() override {
        position.x += velocity.x * speed;
        position.y += velocity.y * speed;
    }

    void setPos(int x, int y) {
        position.x = x;
        position.y = y;
    }

};
