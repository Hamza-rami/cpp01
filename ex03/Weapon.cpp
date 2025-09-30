#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
}

Weapon::Weapon() 
{}

Weapon::~Weapon() {}

const std::string& Weapon::getType() const 
{
    return this->type;
}

void Weapon::setType(const std::string& newType) 
{
    this->type = newType;
}
