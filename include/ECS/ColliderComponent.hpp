#pragma once

#include "ECS.hpp"
#include "SDL2/SDL.h"
#include "TransformComponent.hpp"
#include "TextureManager.hpp"
#include <string>

class ColliderComponent : public Component {
    SDL_Rect collider;
    std::string tag;

    TransformComponent *transform;

    void init() override {
        if (!entity->hasComponent<TransformComponent>()) {
            entity->addComponent<TransformComponent>();
        }
        transform = &entity->getComponent<TransformComponent>();
    }

    void update() override {
        collider.x = transform->position.x;
        collider.y = transform->position.y;
        collider.w = transform->width * transform->scale;
        collider.h = transform->height * transform->scale;
    }

};