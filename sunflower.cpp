#include "sunflower.h"
#include "sun.h"
Sunflower::Sunflower()
{
    //Set up all the attributes of thhe plant.
    this->cost = 50;
    this->life = 4;
    this->range = 0;
    this->rate = 24;
    this->damage = 0;
    this->bomb = false;
    this->seeding = 7.5;
    this->sun = true;
    this->need = false;

}

void Sunflower::makeSun()
{

}

QString Sunflower::getImagePath()
{
    return ":/Sunflower/Sunflower.gif";
}