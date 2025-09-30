#include "Zombie.hpp"

Zombie::~Zombie()
{
    std::cout << name <<" destroyed\n";
}

Zombie::Zombie() 
{
}

void Zombie::announce(void) 
{
    std::cout << name << " BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setname(std::string name)
{
    this->name = name;
}