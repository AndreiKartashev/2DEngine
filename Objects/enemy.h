#ifndef ENEMY_H
#define ENEMY_H

#include "unit.h"
#include "globals.h"
#include <cmath>

class Enemy : public Unit
{
private:
    RectangleShape sprite;
public:
    static Vector2f playerPos;
    Enemy(Vector2f pos, float speed = 0.2);
    // GameObject interface
    void logic() override;

    // Drawable interface
protected:
    void draw(RenderTarget &target, RenderStates states) const override;


    // DamageObject interface
public:
    FloatRect getGlobalBounds() override;
    Vector2f getPosition() override {return sprite.getPosition();}

    // DamageObject interface
public:
    float getRotation() override {return sprite.getRotation();}
};

#endif // ENEMY_H
