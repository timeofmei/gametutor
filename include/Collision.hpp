#pragma once
#include <SDL2/SDL.h>
#include "ECS/ColliderComponent.hpp"


class Collision {
public:
    static bool AABB(const SDL_Rect& recA, const SDL_Rect& recB);
    static bool AABB(const ColliderComponent& colA, const ColliderComponent& colB);
};