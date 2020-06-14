#pragma once
#include "Component.h"
#include "Entity.h"

class SimpleSprite : public Component{
public:
    SimpleSprite(Entity* owner);
// Loads a sprite from file.
    void load(const std::string& filePath);

    // We override the draw method so we can draw our sprite.
    void draw(sf::RenderWindow& window) override;

    void lateUpdate(float deltaTime) override;

private:
    sf::Texture texture;
    sf::Sprite sprite;
};


