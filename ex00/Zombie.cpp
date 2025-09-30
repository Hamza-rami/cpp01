#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name; 
}

Zombie::~Zombie()
{
    std::cout << name <<" destroyed\n";
}

void Zombie::announce(void) 
{
    std::cout << name << " BraiiiiiiinnnzzzZ...\n";
}