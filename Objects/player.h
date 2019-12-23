#ifndef PLAYER_H
#define PLAYER_H

#include "unit.h"
#include "globals.h"
#include "light.h"

class Player : public Unit
{
private:
    RectangleShape sprite;
    // Drawable interface
protected:
    void draw(RenderTarget &target, RenderStates states) const override;

    // GameObject interface
public:
    Player(Vector2f pos, float speed = 0.5);
    void logic() override;
    Vector2f getCenter();

    // DamageObject interface
public:
    FloatRect getGlobalBounds() override;
};

#endif // PLAYER_H
