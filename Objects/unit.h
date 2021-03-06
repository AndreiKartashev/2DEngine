#ifndef UNIT_H
#define UNIT_H

#include "damageobject.h"

class Unit : public DamageObject
{
    // Drawable interface
protected:
    float HP = 100.0;
    float SPEED;
    void draw(RenderTarget &target, RenderStates states) const override = 0;
    // GameObject interface
public:
    void logic() override = 0;
    void damage(float HP);
    // DamageObject interface
public:
    virtual Vector2f getPosition() override = 0;
    virtual FloatRect getGlobalBounds() override = 0;
    float getHP();
    void setHP(float value);
    float getSpeed() {return SPEED;}
    // DamageObject interface
public:
    float getRotation() override = 0;
};

#endif // UNIT_H
